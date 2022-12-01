-- Para a resolução dos exercícios subsequentes considere o esquema de banco de dados, nomeado “Acadêmico“, descrito abaixo:

CREATE TABLE professor (
  idprof,
  nome,
  email,
  endereco,
  cpf,
  idcid
  CONSTRAINT
    FOREIGN KEY (idcid) REFERENCES cidade(idcid)
);

CREATE TABLE aluno (
  idaluno,
  nome,
  endereco,
  telefone,
  idcid,
  CONSTRAINT
    FOREIGN KEY (idcid) REFERENCES cidade(idcid)  
);

CREATE TABLE cidade (
  idcid, 
  nome, 
  UF
);

CREATE TABLE curso (
  idcurso, 
  nomecurso, 
  valorcredito
);

CREATE TABLE turma (
  idturma, 
  idprof,  
  sala, 
  capacidade, 
  idcurso,
  CONSTRAINT fk_idcuso
    FOREIGN KEY (idcurso) REFERENCES curso(idcurso),
  CONSTRAINT fk_idprof
    FOREIGN KEY (idprof) REFERENCES professor (idprof)
);

CREATE TABLE disciplina (
  iddisc, 
  nome
);

CREATE TABLE turdisc (
  idturma, 
  iddisc,
  CONSTRAINT fk_idturma
    FOREIGN KEY (idturma) REFERENCES turma(idturma),
  CONSTRAINT fk_iddisc
    FOREIGN KEY (iddisc) REFERENCES disciplina(iddisc)
);

CREATE TABLE matricula (
  idaluno, 
  idturma,
  CONSTRAINT fk_idaluno
    FOREIGN KEY (idaluno) REFERENCES aluno(idaluno),
  CONSTRAINT fk_idturma
    FOREIGN KEY (idturma) REFERENCES turma(idturma)
);

