create table Orcamentos (
    id_orcamentos int primary key auto_increment,
    data date,
    status char(20)
);

create table Produtos (
    id_produtos int primary key auto_increment,
    descricao varchar(100),
    valor decimal(12,2),
    status char(10),
    falta varchar(50),
    qtd_estoque varchar(100)
);

CREATE TABLE Orcamentos_produtos (
   id INT PRIMARY KEY AUTO_INCREMENT,
   qtd INT,
   valor DECIMAL(12,2),
   status CHAR(20),
   id_produtos INT,
   FOREIGN KEY (id_produtos) REFERENCES Produtos(id_produtos)
);

CREATE TABLE produtos_em_falta (
    id_produtos_em_falta INT PRIMARY KEY AUTO_INCREMENT,
    descricao varchar(100),
    status char(10),
    falta varchar(50)
);

CREATE TABLE produtos_atualizados (
    id_produtos_atualizados INT PRIMARY KEY AUTO_INCREMENT,
    prd_codigo INT,
    prd_qtd_anterior INT,
    prd_qtd_atualizada INT,
    prd_valor decimal(12,2)
);

-- Inserindo dados na tabela Orcamentos
INSERT INTO Orcamentos (data, status) VALUES ('2023-05-01', 'Aberto');
INSERT INTO Orcamentos (data, status) VALUES ('2023-04-28', 'Fechado');
INSERT INTO Orcamentos (data, status) VALUES ('2023-04-25', 'Aberto');

-- Inserindo dados na tabela Produtos
INSERT INTO Produtos (descricao, valor, status, falta, qtd_estoque) VALUES ('Camiseta Preta', 29.90, 'Ativo', 'P', '50');
INSERT INTO Produtos (descricao, valor, status, falta, qtd_estoque) VALUES ('Calça Jeans', 89.90, 'Ativo', 'F', '20');
INSERT INTO Produtos (descricao, valor, status, falta, qtd_estoque) VALUES ('Tênis Esportivo', 199.90, 'Inativo', 'P', '10');

-- Inserindo dados na tabela Orcamentos_produtos
INSERT INTO Orcamentos_produtos (qtd, valor, status, id_produtos) VALUES (1, 89.90, 'Indisponivel', 2);
INSERT INTO Orcamentos_produtos (qtd, valor, status, id_produtos) VALUES (3, 599.70, 'Disponível', 3);
INSERT INTO Orcamentos_produtos (qtd, valor, status, id_produtos) VALUES (2, 59.80, 'Disponível', 1);


DELIMITER //
CREATE TRIGGER atualiza_estoque_orcamentos_produtos
AFTER INSERT ON Orcamentos_produtos
FOR EACH ROW
BEGIN
    IF NEW.status = 'Disponível' THEN
        UPDATE Produtos SET qtd_estoque = qtd_estoque - NEW.qtd WHERE id_produtos = NEW.id_produtos;
    ELSEIF NEW.status = 'Indisponível' OR NEW.status = 'Cancelado' THEN
        UPDATE Produtos SET qtd_estoque = qtd_estoque + NEW.qtd WHERE id_produtos = NEW.id_produtos;
    END IF;
END//
DELIMITER ;

SHOW TRIGGERS FROM triggers_db LIKE 'Orcamentos_produtos';

-- Faça um trigger para armazenar em uma tabela chamada produtos_atualizados (prd_codigo, prd_qtd_anterior, prd_qtd_atualizada, prd_valor) quando ocorrer quaisquer alterações nos atributos da tabela produtos. No entanto, caso a alteração atribua o valor zero para o atributo prd_qtd_estoque, a tabela produtos_em_falta deverá ser alimentada com as mesmas informações da tabela produto, exceto o atributo prd_valor. Além disso, o atributo prd_status do produto atualizado deve ser modificado para NULL e o atributo orp_status de todos os orcamentos_produtos desse produto deverá ser modificado também para NULL.

DELIMITER //

CREATE TRIGGER produtos_trigger BEFORE UPDATE ON Produtos
FOR EACH ROW
BEGIN
    DECLARE qtd_anterior INT;
    DECLARE qtd_atualizada INT;

    IF NEW.qtd_estoque = 0 THEN
        INSERT INTO produtos_em_falta (descricao, status, falta) VALUES (NEW.descricao, NEW.status, NEW.falta);
        SET NEW.status = NULL;
        UPDATE Orcamentos_produtos SET status = NULL WHERE id_produtos = NEW.id_produtos;
    ELSE
        SET qtd_anterior = OLD.qtd_estoque;
        SET qtd_atualizada = NEW.qtd_estoque;
        INSERT INTO produtos_atualizados (prd_codigo, prd_qtd_anterior, prd_qtd_atualizada, prd_valor) VALUES (NEW.id_produtos, qtd_anterior, qtd_atualizada, NEW.valor);
    END IF;
END //

DELIMITER ;

UPDATE Produtos SET qtd_estoque = 0 WHERE id_produtos = 1;
UPDATE Produtos SET qtd_estoque = 2 WHERE id_produtos = 2;
UPDATE Produtos SET qtd_estoque = 4 WHERE id_produtos = 1;


-- Correção dos triggers
DELIMITER \\
CREATE TRIGGER trigger_atualiza_estoque_produto after update on Orcamentos_produtos
    FOR EACH ROW
BEGIN
    IF NEW.orp_status = 2 then
        update produtos set qtd_estoque = qtd_estoque + OLD.qtd
        where codigo = old.prd_codigo
    else
        update produtos set qtd_estoque
    end if \\
end \\
