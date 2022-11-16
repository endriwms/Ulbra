CREATE TABLE categoria (
  id_categoria INT auto_increment PRIMARY KEY,
  nome VARCHAR(20)
);

CREATE TABLE produtos (
  id_produto INT auto_increment PRIMARY KEY,
  descricao VARCHAR(100),
  data_cadastro DATE NOT NULL,
  valor_unitario DECIMAL (18.2),
  fk_categoria_id_categoria INT,
  CONSTRAINT FK_produtos_2
    FOREIGN KEY (fk_categoria_id_categoria) REFERENCES categoria (id_categoria)
      ON DELETE RESTRICT
      ON UPDATE CASCADE
);

CREATE TABLE pede (
  quantidade INT PRIMARY KEY,
  valor_unitario DECIMAL (18.2),
  data_pedido DATE,
  fk_produtos_id_produto INT,
  CONSTRAINT pede_fk
    FOREIGN KEY (fk_produtos_id_produto) REFERENCES produtos (id_produto)
);

CREATE TABLE fornecedor (
  codigo INT,
  nome VARCHAR(20)
);

-- Liste todos os produtos cadastrados e ordene por ordem alfabética de descrição.
SELECT * FROM produtos
  WHERE descricao
  ORDER BY descricao ASC;

-- Liste os produtos que foram pedidos e o nome do fornecedor de cada pedido.

-- Mostre os produtos que já foram pedidos e o nome da categoria a que ele pertence.

-- Mostre o nome do fornecedor, a data do último pedido e a descrição do produto que ele pediu.