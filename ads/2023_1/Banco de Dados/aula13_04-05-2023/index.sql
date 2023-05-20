-- exemplo transactions

SET autocommit = 0;
SET SQL_SAFE_UPDATES = 0;

CREATE TABLE pessoas (
  num_pessoa INT NOT NULL,
  nome_email VARCHAR(100) NOT NULL,
  PRIMARY KEY (num_pessoa)
);

CREATE TABLE PESSOA_FISICA (
  num_pessoa_pf INT NOT NULL,
  nom_pessoa VARCHAR(100) NOT NULL,
  num_CPF VARCHAR(11) NOT NULL,
  num_documento_identidade VARCHAR(20) NOT NULL,
  nom_orgao_emissor_doc_ident VARCHAR(50) NOT NULL,
  dat_nascimento DATE NOT NULL,
  idt_sexo CHAR(1) NOT NULL,
  cod_estado_civil INT NOT NULL,
  PRIMARY KEY (num_pessoa_pf)
);

start transaction;

INSERT INTO pessoas
(num_pessoa, nome_email)
VALUES
(78360, 'rst.marcondes@smail.com'),
(78361, 'jcc.meirelles@jmail.com'),
(78362, 'mjk.amadeus@imail.com');

-- Confirme as inserções realizadas no Exercício 1.
commit;

start transaction;

INSERT INTO PESSOA_FISICA
(num_pessoa_pf, nom_pessoa, num_CPF, num_documento_identidade, nom_orgao_emissor_doc_ident, dat_nascimento, idt_sexo, cod_estado_civil)
VALUES
(78360, 'Roberto Marcondes', '99911122233', '19999888', 'SSP', '1988-03-15', 'M', 1),
(78361, 'Julio Meirellies', '99811233134', '18888999', 'SSP', '1975-02-17', 'M', 1),
(78362, 'Maria Rita Amadeu', '99711333235', '17777888', 'SSP', '1980-12-23', 'F', 1);

-- Confirme as inserções realizadas no Exercício 3.
commit;

-- Na tabela PESSOA_FISICA, altere o nome da pessoa física com código 78361 para “Júlio Meirelles” e o seu estado civil para 2.
start transaction;

UPDATE PESSOA_FISICA
SET nom_pessoa = 'Júlio Meirelles', cod_estado_civil = 2
WHERE num_pessoa_pf = 78361;

-- Consulte a alteração realizada
SELECT * FROM PESSOA_FISICA WHERE num_pessoa_pf = 78361;

-- Desfaça a operação
ROLLBACK;

-- Consulte novamente o registro da PESSOA_FISICA de id 78361
SELECT * FROM PESSOA_FISICA WHERE num_pessoa_pf = 78361;

-- Qual foi o resultado?
-- O estado voltou ao default por conta do rollback

-- Refaça o exercício 5 e confirme a alteração
start transaction;

UPDATE PESSOA_FISICA
SET nom_pessoa = 'Júlio Meirelles', cod_estado_civil = 2
WHERE num_pessoa_pf = 78361;

commit;

