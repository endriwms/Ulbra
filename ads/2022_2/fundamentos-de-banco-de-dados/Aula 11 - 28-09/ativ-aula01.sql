create table aluno (
  id int not null auto_increment primary key,
  nome varchar(50) not null,
  id_professor int not null,
  constraint professores_ensinam_disciplinas
)
  foreign key(id_professor) references professores(id)