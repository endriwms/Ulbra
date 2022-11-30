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
VALUES 
(1, "Mirandela Editora"),
(2, "Editora Via-Norte"),
(3, "Editora Ilhas Tijucas"),
(4, "Maria José Editora")
SELECT * FROM editoras

INSERT INTO assuntos (id_assunto, descricao)
VALUES 
('B', 'Banco de Dados'),
('P', 'Programação'),
('R', 'Redes'),
('S', 'Sistemas Operacionais')
SELECT * FROM assuntos

INSERT INTO livros (id_livro, titulo, preco, lancamento, id_assunto, id_editora)
VALUES
(1, 'Banco de Dados para Web', 31.20, '1999-01-10', 'B', 1),
(2, 'Programando em Linguagem C', 30.00, '1997-10-01', 'P', 1),
(3, 'Programando em Linguagem C++', 111.50, '1998-11-01', 'P', 3),
(4, 'Bancos De Dados na Bioinformáica', 48.00, '0000-00-00', 'B', 2),
(5, 'Redes de Computadores', 42.00, '1996-09-01', 'R', 2)
SELECT * FROM livros


-- 3) – Crie comandos SQLs que retorne os dados solicitados abaixo.

--a) Monte um comando para excluir da tabela livros aqueles que possuem o código maior ou igual a 2, que possuem o preço maior que R$ 50,00 e que já foram lançados.
DELETE
FROM livros
WHERE id_livro >= 2 AND preco > 50.00 AND lancamento < '2022-11-22'
SELECT * FROM livros



-- b) Escreva o comando que seleciona as colunas NOME, CPF e ENDERECO, da tabela AUTOR, para aqueles que possuem a palavra ‘joão’ no nome.
SELECT nome,cpf, endereco 
FROM autores
WHERE nome LIKE "%João%"



-- c) Excluir o livro cujo título é ‘BANCO DE DADOS DISTRIBUÍDO’ ou ‘BANCOS DE DADOS DISTRIBUÍDOS’. Somente essas duas opções devem ser consideradas.
DELETE
FROM livros
WHERE titulo = 'Banco de Dados Ditribuído' || titulo = 'Banco de Dados Ditribuídos'



-- d) Selecione o nome e o CPF de todos os autores que nasceram após 01 de janeiro de 1990.
SELECT nome,cpf 
FROM autores 
WHERE data_nascimento BETWEEN '1990-01-02' AND '2022-11-22'



-- e) Selecione a matrícula e o nome dos autores que possuem RIO DE JANEIRO no seu endereço.
SELECT matricula, nome
FROM autores 
WHERE endereco LIKE '%Rio de Janeiro%'



-- f) Atualize para zero o preço de todos os livros onde a data de lançamento for nula ou onde seu preço atual for inferior a R$ 55,00.
SELECT preco,
preco = 00.00 AS novo_preco
FROM livros
WHERE lancamento = '0000-00-00' || preco < 55.00



-- g) Exclua todos os livros onde o assunto for diferente de ‘S’, ‘P’, ou ‘B’.
delete  
from assuntos
WHERE id_assunto != 'S' || id_assunto != 'B' || id_assunto != 'P'
 -- Não foi possível excluir os dados, pois possuem restrição de integridade --



-- h) Escreva o comando para contar quantos são os autores cadastrados na tabela AUTORES.
SELECT COUNT(*)
FROM autores

-- i) Escreva o comando que apresenta qual o número médio de autores de cada livro. Você deve utilizar, novamente, a tabela AUTOR_LIVRO.
SELECT avg(matricula)
from autores_livros 

-- j) Apresente o comando SQL para gerar uma listagem dos códigos dos livros que possuem a menos dois autores.
SELECT id_livro, matricula
FROM livros, autores
WHERE livros.id_livro > 1 and autores.matricula > 1

-- k) Escreva o comando para apresentar o preço médio dos livros por código de editora. Considere somente aqueles que custam mais de R$ 45,00.
SELECT avg(preco) 
FROM livros 
WHERE preco > 45.00

-- l) Apresente o preço máximo, o preço mínimo e o preço médio dos livros cujos assuntos são ‘S’ ou ‘P’ ou ‘B’, para cada código de editora.
SELECT max(preco), min(preco), avg(preco), id_assunto
from livros
WHERE id_assunto like '%P%' or id_assunto LIKE '%B%' or id_assunto like '%S%'

-- m) Altere o comando do exercício anterior para só considerar os livros que já foram lançados (data de lançamento inferior a data atual) e cujo o preço máximo é inferior a R$ 100,00.
SELECT preco, lancamento 
from livros
WHERE lancamento < '2022-11-22' and preco < 100.00

-- 4) Nos exercícios com junções de tabelas, utilize JOINS.

--a) Estão sendo estudados aumentos nos preços dos livros. Escreva o comando SQL que retorna uma listagem contendo o titulo dos livros, e mais três colunas: uma contendo os preços dos --livros acrescidos de 10% (deve ser chamada de ‘Opção_1’), a segunda contendo os preços acrescidos de 15% (deve ser chamada de ‘Opção_2’) e a terceira contendo os preços dos livros --acrescidos de 20% (deve ser chamada de ‘Opção_3’). Somente devem ser considerados livros que já tenham sido lançados.
SELECT titulo, preco, preco * 1.10 AS Opcao1, preco * 1.15 AS Opcao2, preco * 1.20 AS Opcao3
FROM livros
WHERE lancamento > '0000-00-00'

-- b) Escreva o comando SQL que apresenta uma listagem contendo o código da editora, o nome da editora, a sigla do assunto e o titulo dos livros que já foram lançados. Os dados devem estar em ordem decrescente de preço, e ascendente de código da editora e de título do livro.

-- c) Escreva o comando que apresente uma listagem dos nomes dos autores e do seu ano e mês de nascimento, para os autores brasileiros e que tem livros ainda não lançados. A listagem deve estar ordenada em ordem crescente de nome.
SELECT nome, data_nascimento, nacionalidade, lancamento
FROM autores, livros
WHERE nacionalidade LIKE '%Brasileira%' AND lancamento = NULL
ORDER BY nome ASC

-- d) Escreva o comando que retorna o nome dos autores e o título dos livros de sua autoria. A listagem deve estar ordenada pelo nome do autor, mostrar somente os livros já lançados.
SELECT nome, titulo, lancamento
FROM autores, livros
WHERE lancamento > '0000-00-00'
ORDER BY nome ASC

-- e) Monte a consulta SQL que retorna as editoras que publicaram livros escritos pela autora 'Ana da Silva'
SELECT nome, titulo
FROM editoras, livros
WHERE nome = 'Ana da Silva'

-- f) FUS (faça um SQL) que apresente o título do livro e o nome da editora que o publica para todos os livros que custam menos que 50 reais.
SELECT titulo, nome, preco
FROM livros, editoras
WHERE preco < 50.00

-- g) FUS que apresente o CPF, nome do autor e o preço máximo dos livros de sua autoria. Apresente somente as informações para os autores cujo preço máximo for superior a 50.
SELECT nome, cpf, preco
FROM autores, livros
WHERE preco > 50.00