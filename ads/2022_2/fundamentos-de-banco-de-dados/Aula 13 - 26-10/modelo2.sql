CREATE TABLE pesquisadores (
  id INT NOT NULL auto_increment primary KEY,
  nome VARCHAR (20) NOT NULL,
  sobrenome VARCHAR (60) NOT NULL
);

CREATE TABLE artigos (
  id INT NOT NULL auto_increment primary KEY,
  codigo INT NOT NULL unique,
  nome VARCHAR (100) NOT NULL,
  pagina_inicial INT NOT NULL,
  pagina_final INT NOT NULL
);

CREATE TABLE publicacoes (
  id INT NOT NULL auto_increment primary KEY,
  titulo VARCHAR (50) NOT NULL,
  editora VARCHAR (50) NOT NULL
);

CREATE TABLE pesquisadores_artigos (
  id INT NOT NULL auto_increment primary KEY,
  id_pesquisadores INT NOT NULL,
  id_artigos INT NOT NULL,
  constraint pesquisadores_artigos_fk_pesquisadores
  FOREIGN KEY(id_pesquisadores) references pesquisadores(id)
    ON DELETE restrict
    ON UPDATE cascade,
  constraint pesquisadores_artigos_fk_artigos
  FOREIGN KEY(id_artigos) references artigos(id)
    ON DELETE restrict
    ON UPDATE cascade
);

CREATE TABLE pesquisadores_artigos_publicacoes (
  id INT NOT NULL auto_increment PRIMARY KEY,
  id_pesquisadores_artigos INT NOT NULL,
  id_publicacoes INT NOT NULL,
  constraint pesquisadores_artigos_publicacoes_fk_pesquisadores_artigos
  FOREIGN KEY(id_pesquisadores_artigos) references pesquisadores_artigos(id)
    ON DELETE restrict
    ON UPDATE cascade,
  constraint pesquisadores_artigos_publicacoes_fk_feriodicos
  FOREIGN KEY(id_publicacoes) references publicacoes(id)
    ON DELETE restrict
    ON UPDATE cascade
)

-- Popular tabelas
INSERT INTO pesquisadores (nome, sobrenome)
  VALUES ('João', 'Silva'), ('Pedro', 'Oliveira'), ('Carlos', 'Santos'), ('João', 'Cardoso'), ('Daniel', 'Silva');

INSERT INTO artigos (codigo, nome, pagina_inicial, pagina_final)
  VALUES (1230, 'Tecnologia e Escola', 11, 12), (1231, 'TI e Mercado de Trabalho', 13, 13), (1232, 'Banco de Dados', 18, 21), (1233, 'Introdução a Computação', 22, 22), (1234, 'Programação Web', 23, 27), (1235, 'Engenharia de Software', 15, 16), (1236, 'Segurança nas Redes', 35, 39);

INSERT INTO publicacoes (titulo, editora)
  VALUES ('Publicação 1', 'Atlas'), ('Publicação 2', 'Saraiva'), ('Publicação 3', 'Moderna'), ('Publicação 4', 'Abril');

INSERT INTO pesquisadores_artigos (id_pesquisadores, id_artigos)
  VALUES (1, 2), (2, 1), (3, 4), (1, 1), (4, 3), (2, 5), (4, 5);

INSERT INTO pesquisadores_artigos_publicacoes (id_pesquisadores_artigos, id_publicacoes)
  VALUES (1, 1), (2, 1), (2, 4), (2, 3), (4, 2), (5, 2), (2, 2), (1, 4), (2, 3);

-- listar o artigo com código 1234
SELECT * FROM artigos
  WHERE codigo = 1234

-- Listar os artigos da editora Saraiva.

SELECT editora, nome as artigo
  FROM pesquisadores_artigos_publicacoes
  INNER JOIN publicacoes on id_publicacoes = publicacoes.id
  INNER JOIN artigos
  INNER JOIN pesquisadores_artigos on id_artigos = artigos.id
  ON id_artigos = publicacoes.id
  WHERE editora = 'Saraiva'
    GROUP by editora, nome

-- Listar os pesquisadores onde o nome inicia com João.
SELECT * FROM pesquisadores
  WHERE nome = 'João'