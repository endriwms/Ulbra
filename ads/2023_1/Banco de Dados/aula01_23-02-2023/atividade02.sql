CREATE TABLE Cidade (
  id INT AUTO_INCREMENT PRIMARY KEY,
  nome VARCHAR(50) NOT NULL,
  uf VARCHAR(2) NOT NULL
  );

 CREATE TABLE Filial (
    id int auto_increment primary key,
    nome varchar(50) not null,
    endereco varchar(50),
    id_cidade int not null,
    constraint fk_id_cidade_filial
      foreign key(id_cidade) references Cidade(id)
  );
  
  CREATE TABLE Empregado (
    id int auto_increment primary key,
    nome varchar(50) not null,
    endereco varchar(50) not null,
    rg varchar(15) not null,
    ct varchar(15),
    cpf varchar(15) not null,
    salario DECIMAL(10,2),
    id_cidade int not null,
    id_filial int not null,
      constraint fk_id_cidade_empregado
        foreign key(id_cidade) references Cidade(id),
      constraint fk_id_filial_empregado
        foreign key(id_filial) references Filial(id)
  );

CREATE TABLE Produto (
    id int auto_increment primary key,
    descricao varchar(150) not null,
    preco DECIMAL(10,2),
    nome_categoria varchar(50) not null,
    descricao_categoria varchar(150) not null
  );

  CREATE TABLE Vende (
    id_produto int not null,
    id_filial int not null,
    constraint fk_id_produto_vende
      foreign key(id_produto) references Produto(id),
    constraint fk_id_filial_vende
      foreign key(id_filial) references Filial(id)
);