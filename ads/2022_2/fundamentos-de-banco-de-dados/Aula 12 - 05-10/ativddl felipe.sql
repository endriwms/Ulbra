create table categoria(
    id int auto_increment primary key,
    nome varchar(100) not null
);

create table produtos(
    id int auto_increment primary key,
    descricao varchar(200) not null,
    data_cadastro date not null,
    valor_unitario float(10) not null
);

create table pede(
    quantidade float(10) primary key,
    valor_unitario float(10) not null,
    data_ date not null
);

create table fornecedor(
    id int(30),
    nome varchar(100) not null
);

-- Faça um comando (FUC) para adicionar o campo data_ultima_compra na tabela fornecedor.

ALTER TABLE fornecedor add COLUMN data_ultima_compra date;

-- FUC para alterar o nome do atributo data em PEDE para data_pedido.

ALTER TABLE pede RENAME COLUMN data_ to data_pedido;

-- FUC para deletar o campo data_cadastro em produtos

ALTER TABLE produtos drop COLUMN data_cadastro;

-- FUC para adicionar na relação categoria e produto para o delete ser em cascata e o update ser restrict.

create table pertence(
    id_produto int not null,
    id_categoria int not null,
        constraint fk_id_produto_pertence
            foreign key(id_produto) references produtos(id),
        constraint fk_id_categoria_pertence
            foreign key(id_categoria) references categoria(id)
);

ALTER TABLE pertence
drop CONSTRAINT fk_id_categoria_pertence;

ALTER TABLE pertence
ADD CONSTRAINT fk_id_categoria_pertence
    FOREIGN KEY (id_categoria)
    REFERENCES categoria(id)
    ON DELETE CASCADE ON UPDATE RESTRICT;


ALTER TABLE pertence
drop CONSTRAINT fk_id_produto_pertence;

ALTER TABLE pertence
ADD CONSTRAINT fk_id_produto_pertence
    FOREIGN KEY (id_produto)
    REFERENCES produtos(id)
    ON DELETE CASCADE ON UPDATE RESTRICT;

-- FUC para aumentar o tamanho do domínio do campo nome do fornecedor para mais 30 caracteres.

alter table fornecedor MODIFY nome varchar(130) not null;

-- FUC para apagar a tabela fornecedor. Explique o que vai acontecer com o seu esquema e as consequências disso.

drop TABLE fornecedor;

-- A tabela fornecedor foi apagada sem restrições pois não havia nenhuma relação de integridade que a impedisse de ser exluída.
-- a coluna foi reinserida para dar continuidade à atividade

create table fornecedor(
    id int(30),
    nome varchar(130) not null
);

-- FUC para adicionar o número do pedido em PEDE. Este número deve aceitar caracteres.

alter TABLE pede add COLUMN numero_pedido varchar(100);

-- Popule as tabelas utilizando comandos insert. 

INSERT into pede(quantidade, valor_unitario, data_pedido, numero_pedido) values(2, 23.99, 2021-04-22, 234)

-- Exclua um produto, ilustre o comando e explique a restrição de integridade.

DROP from produtos WHERE 2 

-- Ao tentar exlcuir o produto, automaticamente a ação é bloqueada por conta da restrição de integridade.

--

-- Atualize a chave primária de um produto, ilustre o comando e explique a restrição de integridade.

alter table produtos MODIFY id int(5);

--  Ao atualizar a primary, a menos que a mesma seja atualizada para uma primary key de mesmo nome, 
--  e atributos congruentes com os valores ja registrados, a aplicação será bloqueada por conta da restrição de integridade.