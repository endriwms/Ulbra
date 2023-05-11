-- Tabela de Produtos
CREATE TABLE produto (
  id_produto INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(50) NOT NULL,
  categoria VARCHAR(50) NOT NULL,
  descricao VARCHAR(255) NOT NULL,
  estoque INT NOT NULL
);

-- Tabela de Ingredientes
CREATE TABLE ingrediente (
  id_ingrediente INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(50) NOT NULL,
  estoque INT NOT NULL
);

-- Tabela de Lotes
CREATE TABLE lote (
  id_lote INT AUTO_INCREMENT PRIMARY KEY,
  data_producao DATE NOT NULL,
  quantidade_produzida INT NOT NULL
);

-- Tabela de associação ItemLote
CREATE TABLE item_lote (
  id_lote INT NOT NULL,
  id_ingrediente INT NOT NULL,
  quantidade_utilizada INT NOT NULL,
  PRIMARY KEY (id_lote, id_ingrediente),
  FOREIGN KEY (id_lote)
      REFERENCES lote(id_lote)
      ON UPDATE CASCADE
      ON DELETE RESTRICT,
  FOREIGN KEY (id_ingrediente)
      REFERENCES ingrediente(id_ingrediente)
      ON UPDATE CASCADE
      ON DELETE RESTRICT
);

-- Tabela de associação Contem
CREATE TABLE contem (
  id_produto INT NOT NULL,
  id_ingrediente INT NOT NULL,
  quantidade_utilizada INT NOT NULL,
  PRIMARY KEY (id_produto, id_ingrediente),
  FOREIGN KEY (id_produto)
      REFERENCES produto(id_produto)
      ON UPDATE CASCADE
      ON DELETE RESTRICT,
  FOREIGN KEY (id_ingrediente) REFERENCES ingrediente(id_ingrediente) ON DELETE CASCADE
);

-- Alterar a tabela de Produtos e incluir o tempo de validade.
ALTER TABLE produto
ADD COLUMN data_validade DATE NOT NULL;

-- Gerar os scripts de inserção para os registros.
INSERT INTO produto (nome, categoria, descricao, estoque, data_validade)
VALUES ('Pão Francês', 'Padaria', 'Delicioso pão francês', 100, DATE_ADD(NOW(), INTERVAL 7 DAY)),
       ('Bolo de Chocolate', 'Confeitaria', 'Bolo de chocolate com cobertura', 50, DATE_ADD(NOW(), INTERVAL 7 DAY)),
       ('Biscoito de Aveia', 'Confeitaria', 'Biscoito de aveia integral', 200, DATE_ADD(NOW(), INTERVAL 7 DAY));

INSERT INTO ingrediente (nome, estoque)
VALUES ('Farinha de trigo', 1000),
       ('Açúcar', 500),
       ('Ovo', 200),
       ('Leite', 300);

INSERT INTO lote (data_producao, quantidade_produzida)
VALUES (NOW(), 100),
       (NOW(), 50),
       (NOW(), 200);

INSERT INTO item_lote (id_lote, id_ingrediente, quantidade_utilizada)
VALUES (1, 1, 50),
       (1, 2, 20),
       (1, 3, 5),
       (1, 4, 100),
       (2, 1, 20),
       (2, 2, 10),
       (2, 3, 2),
       (2, 4, 50),
       (3, 1, 80),
       (3, 2, 30),
       (3, 3, 10),
       (3, 4, 150);

INSERT INTO contem (id_produto, id_ingrediente, quantidade_utilizada)
VALUES (1, 1, 5),
       (1, 2, 2),
       (1, 3, 1),
       (1, 4, 10),
       (2, 1, 10),
       (2, 2, 5),
       (2, 3, 1),
       (2, 4, 20),
       (3, 1, 20),
       (3, 2, 10),
       (3, 3, 2),
       (3, 4, 30);

# Gerar os scripts de consulta que respondam às seguintes questões:
 # Exibir quantos produtos há para cada categoria;
    SELECT categoria, COUNT(*) as quantidade
    FROM produto
    GROUP BY categoria;

 # Exibir todos os produtos, quais ingredientes e em que quantidade são  utilizados para produzi-lo;
    SELECT p.nome AS produto,
           i.nome AS ingrediente,
           cl.quantidade_utilizada AS quantidade
    FROM produto p
        INNER JOIN contem c
            ON c.id_produto = p.id_produto
        INNER JOIN ingrediente i
            ON i.id_ingrediente = c.id_ingrediente
        INNER JOIN item_lote cl
            ON cl.id_ingrediente = i.id_ingrediente
    ORDER BY p.nome;

 # Exibir qual a quantidade produzida de cada produto dos últimos 30 dias;
    SELECT p.nome AS produto,
       SUM(l.quantidade_produzida) AS quantidade_produzida
    FROM lote l
        JOIN contem c
            ON l.id_lote = c.id_produto
        JOIN produto p
            ON c.id_produto = p.id_produto
    WHERE l.data_producao >= DATE_SUB(CURDATE(), INTERVAL 30 DAY)
    GROUP BY p.nome;


 # Se for dobrada a produção para o próximo mês, quanto de ingrediente será  necessário.
    SELECT i.nome AS ingrediente,
           SUM(il.quantidade_utilizada * (l.quantidade_produzida * 2)) AS quantidade_necessaria
    FROM ingrediente i
        JOIN item_lote il
            ON i.id_ingrediente = il.id_ingrediente
        JOIN lote l
            ON il.id_lote = l.id_lote
        JOIN contem c
            ON l.id_lote = c.id_produto
    GROUP BY i.nome;

 # Mostrar os ingredientes que nunca foram utilizados;
    SELECT nome
    FROM ingrediente
    WHERE id_ingrediente NOT IN (
      SELECT DISTINCT id_ingrediente
      FROM item_lote
    );

 # Crie uma trigger para garantir o controle de estoque dos produtos fabricados. Quanto um produto for fabricado deve dar saída dos estoque dos ingredientes utilizados. Caso ocorra o estorno da fabricação, manter o estoque dos ingredientes atualizado também;
    CREATE TRIGGER atualiza_estoque AFTER INSERT ON lote
    FOR EACH ROW
    BEGIN
      -- Atualiza o estoque dos ingredientes utilizados no lote
      UPDATE ingrediente i
      JOIN item_lote il ON i.id_ingrediente = il.id_ingrediente
      SET i.estoque = i.estoque - il.quantidade_utilizada * NEW.quantidade_produzida
      WHERE il.id_lote = NEW.id_lote;

      -- Caso ocorra estorno da fabricação, atualiza o estoque dos ingredientes
      -- devolvidos ao estoque
      IF NEW.quantidade_produzida = 0 THEN
        UPDATE ingrediente i
        JOIN item_lote il ON i.id_ingrediente = il.id_ingrediente
        SET i.estoque = i.estoque + il.quantidade_utilizada * OLD.quantidade_produzida
        WHERE il.id_lote = NEW.id_lote;
      END IF;
    END;

    INSERT INTO lote (data_producao, quantidade_produzida)
    VALUES (NOW(), 100);

 # Utilizando controle de transações, atualize as receitas para reduzir em 10% a quantidade de fermento utilizada;
    START TRANSACTION;

    -- atualizar item_lote
    UPDATE item_lote
    SET quantidade_utilizada = quantidade_utilizada * 0.9
    WHERE id_ingrediente IN (1, 2);

    -- atualizar contem
    UPDATE contem
    SET quantidade_utilizada = quantidade_utilizada * 0.9
    WHERE id_ingrediente IN (1, 2);

 # Confirme a transação do exercício anterior;
    COMMIT;

 # Utilizando controle de transações, exclua todos os registros de produção do  último mês;
    START TRANSACTION;

    DELETE FROM item_lote
    WHERE id_lote IN (
      SELECT id_lote
      FROM lote
      WHERE MONTH(data_producao) = MONTH(NOW() - INTERVAL 1 MONTH)
    );

    DELETE FROM lote
    WHERE MONTH(data_producao) = MONTH(NOW() - INTERVAL 1 MONTH);

    COMMIT;

 # Desfaça a transação realizada no exercício anterior;
    ROLLBACK;

