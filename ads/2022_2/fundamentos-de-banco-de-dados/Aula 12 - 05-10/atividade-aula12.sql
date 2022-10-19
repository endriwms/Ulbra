create table fornecedores(
  id int auto_increment primary key,
  codigo int not null unique,
  nome varchar(30) not null
);

-- INSERT INTO fornecedores 
-- (id, codigo, nome) VALUES ('1', '123', 'fornecedor 1');

ALTER TABLE fornecedores 
  MODIFY COLUMN nome varchar(60);

ALTER TABLE fornecedores
  ADD data_ultima_compra date not null

DROP TABLE fornecedores -- Não funciona

create table pedidos(
  id int auto_increment primary key,
  quantidade int not null,
  valor_unitario float not null,
  data_do_pedido date not null
);

ALTER TABLE pedidos
  CHANGE data_do_pedido data_pedido date not null;

create table categorias(
  id_categoria int auto_increment primary key,
  codigo_categoria int not null unique,
  nome varchar(30)
);

-- INSERT INTO categorias
-- (id_categoria, codigo_categoria, nome) VALUES ('1', '321', 'categoria 1');
  
  -- id_produto int not null,
  -- constraint categorias_fk_tem_produtos
  --   foreign key (id_produto) references produtos(id)

ALTER TABLE categorias
  add COLUMN id_produto int not null,
  ADD CONSTRAINT categorias_fk_tem_produtos 
  FOREIGN KEY (id_produto) REFERENCES produtos(id) 
  ON DELETE CASCADE
  ON UPDATE RESTRICT;

create table produtos(
  id int auto_increment primary key,
  codigo_produto int not null unique,
  descricao varchar(100),
  data_cadastro date not null,
  valor_unitario float not null,
  id_categoria int not null
);

-- INSERT INTO produtos
-- (id, codigo_produto, descricao, data_cadastro, valor_unitario) VALUES ('1', '1234', 'esse é o produto 1', 'cadastrado em 18/10/22', 'R$10,00');
-- INSERT INTO produtos 
-- (id_categoria) VALUES SELECT * FROM categoria WHERE id_categoria = '321';

ALTER TABLE produtos 
  DROP data_cadastro;

create table fornecedores_tem_produtos(
  id_fornecedor int not null,
  id_pedido int not null,
  id_produto int not null,
  constraint fornecedores_fk_fornecedores_tem_produtos
    foreign key (id_fornecedor) references fornecedores(id)
      ON DELETE CASCADE
      ON UPDATE RESTRICT,
  constraint pedidos_fk_fornecedores_tem_produtos
    foreign key (id_pedido) references pedidos(id),
  constraint produtos_fk_fornecedores_tem_produtos
    foreign key (id_produto) references produtos(id)
);