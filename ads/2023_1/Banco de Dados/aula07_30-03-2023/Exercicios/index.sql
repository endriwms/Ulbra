-- Escreva uma SP que receba, como parâmetro, o CPF de um autor e retorne a quantidade de livros escrito pelo mesmo.
CREATE TABLE livros (
  id INT AUTO_INCREMENT PRIMARY KEY,
  titulo VARCHAR(100),
  autor VARCHAR(50),
  cpf_autor VARCHAR(11)
);

INSERT INTO livros (titulo, autor, cpf_autor) 
VALUES ('Livro 1', 'Autor 1', '12345678900'),
       ('Livro 2', 'Autor 1', '12345678900'),
       ('Livro 3', 'Autor 2', '98765432100'),
       ('Livro 4', 'Autor 3', '11111111111'),
       ('Livro 5', 'Autor 3', '11111111111');
    
DELIMITER //

CREATE PROCEDURE quantidade_livros_autor (
  IN p_cpf VARCHAR(11)
)
BEGIN
  DECLARE qtd_livros INT;
  SELECT COUNT(*) INTO qtd_livros
  FROM livros
  WHERE cpf_autor = p_cpf;
  SELECT qtd_livros;
END //

DELIMITER ;

CALL quantidade_livros_autor('12345678900');

-- Crie uma SP que receba, como parâmetro, a data de publicação de um livro e seu código. O procedimento deve atualizar a tabela de livros, especificando a data de lançamento para o livro em questão.
ALTER TABLE livros ADD COLUMN data_lancamento DATE;

UPDATE livros SET data_lancamento = '2021-01-15' WHERE id = 1;
UPDATE livros SET data_lancamento = '2021-03-20' WHERE id = 2;
UPDATE livros SET data_lancamento = '2022-05-10' WHERE id = 3;
UPDATE livros SET data_lancamento = '2020-11-30' WHERE id = 4;
UPDATE livros SET data_lancamento = '2022-09-01' WHERE id = 5;

DELIMITER //

CREATE PROCEDURE atualiza_data_lancamento (
  IN livro_id INT, IN data_lancamento DATE
)
BEGIN
  UPDATE livros
  SET data_lancamento = data_lancamento
  WHERE id = livro_id;
END //

DELIMITER ;

CALL atualiza_data_lancamento(1, '2022-01-01');

-- Em algumas situações, SPs são utilizados para a manutenção da segurança do banco de dados. Nestes casos, realizamos inclusões, alterações e exclusões de dados, através de SPs. Crie SPs que recebem os parâmetros adequados e realizam as seguintes operações:
ALTER TABLE livros 
  ADD COLUMN editora VARCHAR(100),
  ADD COLUMN ano_publicacao INT,
  ADD COLUMN genero VARCHAR(50)

-- a) Inserir uma linha na tabela de livros
DELIMITER //

CREATE PROCEDURE insere_livro(
  IN titulo VARCHAR(100),
  IN autor VARCHAR(100),
  IN cpf_autor CHAR(11),
  IN editora VARCHAR(100),
  IN ano_publicacao INT,
  IN genero VARCHAR(50),
  IN data_lancamento DATE
)
BEGIN
  INSERT INTO livros(titulo, autor, cpf_autor, editora, ano_publicacao, genero, data_lancamento)
  VALUES(titulo, autor, cpf_autor, editora, ano_publicacao, genero, data_lancamento);
END //

DELIMITER ;

CALL insere_livro(
  'O Grande Gatsby',
  'F. Scott Fitzgerald',
  '12345678900',
  'Editora A',
  1925,
  'Romance',
  '2022-03-01'
);

-- b) Excluir uma linha da tabela de livros
DELIMITER //

CREATE PROCEDURE exclui_livro(
  IN livro_id INT
)
BEGIN
  DELETE FROM livros WHERE id = livro_id;
END //

DELIMITER ;

CALL exclui_livro(3);

-- c) Atualizar valores na tabela de livros
DELIMITER //

CREATE PROCEDURE atualiza_livro(
  IN livro_id INT,
  IN titulo VARCHAR(100),
  IN autor VARCHAR(100),
  IN cpf_autor CHAR(11),
  IN editora VARCHAR(100),
  IN ano_publicacao INT,
  IN genero VARCHAR(50),
  IN data_lancamento DATE
)
BEGIN
  UPDATE livros
  SET titulo = titulo,
    autor = autor,
    cpf_autor = cpf_autor,
    editora = editora,
    ano_publicacao = ano_publicacao,
    genero = genero,
    data_lancamento = data_lancamento
  WHERE id = livro_id;
END //

DELIMITER ;

CALL atualiza_livro(
  2,
  '1984',
  'George Orwell',
  '98765432100',
  'Editora B',
  1949,
  'Ficção Científica',
  '2022-02-15'
);

-- Crie uma SP que aumente ou diminua o valor dos preços dos livros de uma editora específica. O aumento pode ser em percentual ou em valor.
ALTER TABLE livros ADD preco DECIMAL(10, 2) NOT NULL;

DELIMITER //

CREATE PROCEDURE altera_preco_livros(
  IN editora_param VARCHAR(255),
  IN valor_param DECIMAL(10, 2),
  IN is_percentual BOOLEAN
)
BEGIN
  DECLARE valor_novo DECIMAL(10, 2);

  IF is_percentual THEN
    SET valor_novo = valor_param / 100 + 1;
  ELSE
    SET valor_novo = valor_param;
  END IF;

  UPDATE livros
  SET preco = preco * valor_novo
  WHERE editora = editora_param;
END //

DELIMITER ;

CALL altera_preco_livros('Editora X', 10, true);


