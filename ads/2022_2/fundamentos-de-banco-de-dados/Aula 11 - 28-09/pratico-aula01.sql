create table professores (
  id int not null auto_increment primary key,
  nome varchar(100) not null
);

create table disciplinas (
  id int not null auto_increment primary key,
  nome varchar(50) not null,
  id_professor int not null,
  constraint professores_ensinam_disciplinas
  foreign key(id_professor) references professores(id)
);

create table softwares (
  id int not null auto_increment primary key,
  nome varchar(100) not null,
  fabricante varchar(50)
);

create table disciplinas_usam_softwares (
  id_disciplina int not null,
  id_software int not null,
  constraint fk_disciplinas_disciplinas_tem_softwares
  foreign key(id_disciplina) references disciplinas(id),
  constraint fk_softwares_disciplinas_tem_softwares
  foreign key(id_software) references softwares(id)
);