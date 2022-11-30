-- Tabelas --
CREATE TABLE editoras (
  id_editora INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(40)
);

CREATE TABLE assuntos (
  id_assunto CHAR(1) PRIMARY KEY,
  descricao VARCHAR(40)
);

CREATE TABLE livros (
  id_livro INT AUTO_INCREMENT PRIMARY KEY,
  id_assunto CHAR(1),
  id_editora INT,
  titulo VARCHAR(80),
  preco DECIMAL(18,2),
  lancamento DATE,
  CONSTRAINT fk_id_assunto 
    FOREIGN KEY (id_assunto) REFERENCES assuntos (id_assunto)
    ON DELETE RESTRICT
    ON UPDATE CASCADE,
  CONSTRAINT fk_id_editora
    FOREIGN KEY (id_editora) REFERENCES editoras (id_editora)
    ON DELETE RESTRICT
    ON UPDATE CASCADE
);

CREATE TABLE autores (
  matricula INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(40),
  cpf VARCHAR(11),
  endereco VARCHAR(50),
  data_nascimento DATE,
  nacionalidade VARCHAR(30)
);

CREATE TABLE autores_livros (
  matricula INT,
  id_livro INT,
  CONSTRAINT fk_matricula
    FOREIGN KEY (matricula) REFERENCES autores (matricula)
    ON DELETE RESTRICT
    ON UPDATE CASCADE,
  CONSTRAINT fk_id_livro
    FOREIGN KEY (id_livro) REFERENCES livros (id_livro)
    ON DELETE RESTRICT
    ON UPDATE CASCADE
);

-- 2) Crie os SQLs solicitados abaixo. --
-- (a) --
INSERT INTO editoras (id_editora, nome) 
  VALUES (1, "Mirandela Editora"),
         (2, "Editora Via-Norte"),
         (3, "Editora Ilhas Tijucas"),
         (4, "Maria José Editora")
         
SELECT * FROM editoras

INSERT INTO assuntos (id_assunto, descricao)
  VALUES ('B', 'Banco de Dados'),
        ('P', 'Programação'),
        ('R', 'Redes'),
        ('S', 'Sistemas Operacionais')

SELECT * FROM assuntos

INSERT INTO livros (id_livro, titulo, preco, lancamento, id_assunto, id_editora)
VALUES (1, 'Banco de Dados para Web', 31.20, '1999-01-10', 'B', 1),
       (2, 'Programando em Linguagem C', 30.00, '1997-10-01', 'P', 1),
       (3, 'Programando em Linguagem C++', 111.50, '1998-11-01', 'P', 3),
       (4, 'Bancos De Dados na Bioinformáica', 48.00, null, 'B', 2),
       (5, 'Redes de Computadores', 42.00, '1996-09-01', 'R', 2)

SELECT * FROM livros

-- 3) – Crie comandos SQLs que retorne os dados solicitados abaixo.

--a) Monte um comando para excluir da tabela livros aqueles que possuem o código maior ou igual a 2, que possuem o preço maior que R$ 50,00 e que já foram lançados.
DELETE
  FROM livros
    WHERE id_livro >= 2 AND preco > 50.00 AND lancamento < current_date

-- b) Escreva o comando que seleciona as colunas NOME, CPF e ENDERECO, da tabela AUTOR, para aqueles que possuem a palavra ‘joão’ no nome.
SELECT nome, cpf, endereco 
FROM autores
WHERE nome LIKE "%joao%"

-- c) Excluir o livro cujo título é ‘BANCO DE DADOS DISTRIBUÍDO’ ou ‘BANCOS DE DADOS DISTRIBUÍDOS’. Somente essas duas opções devem ser consideradas.
DELETE
  FROM livros
    WHERE titulo LIKE 'BANCO_ DE DADO_ DISTRIBUÍDO_'

-- d) Selecione o nome e o CPF de todos os autores que nasceram após 01 de janeiro de 1990.
SELECT nome,cpf 
  FROM autores 
    WHERE data_nascimento BETWEEN '1990-01-02' AND '2022-11-22'

-- e) Selecione a matrícula e o nome dos autores que possuem RIO DE JANEIRO no seu endereço.
SELECT matricula, nome
  FROM autores 
   WHERE endereco LIKE '%rio de janeiro%'

-- f) Atualize para zero o preço de todos os livros onde a data de lançamento for nula ou onde seu preço atual for inferior a R$ 55,00.
SELECT preco, preco = 00.00 AS novo_preco
  FROM livros
    WHERE lancamento is null OR preco < 55.00

-- g) Exclua todos os livros onde o assunto for diferente de ‘S’, ‘P’, ou ‘B’.
DELETE
  FROM livros
    WHERE id_assunto <> 'P' and
          id_assunto <> 'P' and
          id_assunto <> 'S'

-- OU

SELECT *
  FROM livros
    WHERE id_assunto NOT IN('P', 'B', 'S')

-- h) Escreva o comando para contar quantos são os autores cadastrados na tabela AUTORES.
SELECT COUNT(matricula) AS quantos
  FROM autores

-- i)Escreva o comando que apresenta qual o número médio de autores de cada livro. Você deve utilizar, novamente, a tabela AUTOR_LIVRO.
SELECT AVG(quantos) from (
  SELECT id_livro, COUNT(matricula) AS quantos
    FROM autores_livros
    GROUP BY id_livro
)

-- j) Apresente o comando SQL para gerar uma listagem dos códigos dos livros que possuem a menos dois autores.
SELECT id_livro, COUNT(matricula) AS quantos
  FROM autores_livros
  GROUP BY id_livro
  HAVING quantos >= 2

-- j) Apresente o preço máximo, o preço mínimo e o preço médio dos livros cujos assuntos são ‘S’ ou ‘P’ ou ‘B’, para cada código de editora.
SELECT id_livro ,COUNT(matricula) AS quantos
  FROM autores_livros
    group by id_livro
        having quantos >= 2;

-- k) Escreva o comando para apresentar o preço médio dos livros por código de editora. Considere somente aqueles que custam mais de R$ 45,00.
SELECT id_editora AVG(preco) as preco
  FROM livros
    WHERE preco > 45
    GROUP BY id_editora

-- l) Apresente o preço máximo, o preço mínimo e o preço médio dos livros cujos assuntos são ‘S’ ou ‘P’ ou ‘B’, para cada código de editora.
SELECT min(preco) AS minimo, max(preco) AS maximo AVG(preco) AS media
  FROM livros
    WHERE id_assunto IN ('P', 'B', 'S')
    GROUP BY id_editora

-- m) Altere o comando do exercício anterior para só considerar os livros que já foram lançados (data de lançamento inferior a data atual) e cujo o preço máximo é inferior a R$ 100,00.
SELECT preco, lancamento 
  from livros
    WHERE lancamento < current_date and preco < 100.00
