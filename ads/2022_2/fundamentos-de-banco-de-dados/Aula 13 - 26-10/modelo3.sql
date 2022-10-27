CREATE TABLE socios (
  id_socio INT auto_increment PRIMARY KEY, 
  codigo_socio VARCHAR (10) NOT NULL,
  nome VARCHAR (50) NOT NULL,
  telefone VARCHAR (20) NOT NULL,
  endereco VARCHAR (100) NOT NULL
);

CREATE TABLE servicos (
  id_servico INT auto_increment PRIMARY KEY, 
  codigo_servico VARCHAR (10) NOT NULL,
  descricao VARCHAR (200) NOT NULL,
  valor_servico DECIMAL (18.2) NOT NULL
);

CREATE TABLE pedidos_servicos (
  id_pedido INT auto_increment PRIMARY KEY,
  valor_pedido DECIMAL (18.2) NOT NULL,
  data_pedido DATE NOT NULL,
  id_socio INT,
  id_servico INT,
  CONSTRAINT socios_fk_pedidos_servicos
    FOREIGN KEY (id_socio) REFERENCES socios(id_socio)
    ON DELETE restrict
    ON UPDATE cascade,
  CONSTRAINT servicos_fk_pedidos_servicos
    FOREIGN KEY (id_servico) REFERENCES servicos(id_servico)
    ON DELETE restrict
    ON UPDATE cascade
);

-- inserts tabela socios

INSERT INTO socios(codigo_socio, nome, telefone, endereco)
  VALUES (345, 'Marcos', '36672030','Av Barão do Rio Branco');

INSERT INTO socios(codigo_socio, nome, telefone, endereco)
  VALUES (678, 'Marcio', '36673040','Av Castelo Branco');

INSERT INTO socios(codigo_socio, nome, telefone, endereco)
  VALUES (91011, 'Marcia', '36673050','Av Ipiranga');

SELECT * FROM socios;

-- inserts tabela serviços

INSERT INTO servicos(codigo_servico, descricao, valor_servico )
  VALUES (123, 'serviço instalação eletrica', 300);

INSERT INTO servicos(codigo_servico, descricao, valor_servico )
  VALUES (456, 'serviço de hidraulica', 2500);

INSERT INTO servicos(codigo_servico, descricao, valor_servico)
  VALUES (789, 'serviço de marcenaria', 1500);

SELECT * FROM servicos;

-- inserts tabela pedidos_serviços

INSERT INTO pedidos_servicos(valor_pedido, data_pedido)
     VALUES (1500.00, '2020-05-20');
INSERT INTO pedidos_servicos(valor_pedido, data_pedido)
     VALUES (3500.00, '2020-08-10');
INSERT INTO pedidos_servicos(valor_pedido, data_pedido)
     VALUES (5500.00, '2020-10-25');

SELECT * FROM pedidos_servicos;

-- comandos

SELECT * FROM servicos WHERE valor_servico > 500;

SELECT * FROM pedidos_servicos WHERE data_pedido = '2020-01-20';

SELECT * FROM socios WHERE endereco = 'Rua Barão do Rio Branco';

