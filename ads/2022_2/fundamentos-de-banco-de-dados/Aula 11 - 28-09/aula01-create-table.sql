/*
  Utilizar sempre snake_case

  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  Qual a diferença entre char(tm) e varchar(tm)?

  nome char(10)
  ##########
  lisa######

  nome varchar(10)
  _______________
  lisa
  ####
  Alexandre
  #########
*/

create table clientes (
  id int not null primary key,
  nome varchar(100) not null,
  CPF char(14) unique,
  limite_credito float default 0,
);

create table enderecos (
  id int not null primary key,
  logradouro varchar(100) not null,
  numero int default 0,
  bairro varchar(100),
  cidade varchar(100),
  estado char(2),
  id_cliente int not null,  
  constraint clientes_tem_enderecos
  foreign key(id_cliente) references clientes(id)
);