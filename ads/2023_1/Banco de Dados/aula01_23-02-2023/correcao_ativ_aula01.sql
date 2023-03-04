-- 1) Considerando a criação das tabelas no banco de dados, existe alguma restrição quanto a ordem de execução? Se existe, defina uma sequência correta para a criação das tabelas do esquema acima. 

-- Resposta 1): A ordem correta é Cidade, Filial, Empregado, Produto e por fim Vende

-- 2) Utilize o Notepad++ ou um editor de sua preferência (workbench) para criar o esquema de dados apresentado acima.
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

-- 3) Defina a sintaxe SQL para resolver as seguintes questões:

-- a) Criar as tabelas vende e filial.
CREATE TABLE Vende (
  id_produto int not null,
  id_filial int not null,
  constraint fk_id_produto_vende
    foreign key(id_produto) references Produto(id),
  constraint fk_id_filial_vende
    foreign key(id_filial) references Filial(id)
);

CREATE TABLE Filial (
  id int auto_increment primary key,
  nome varchar(50) not null,
  endereco varchar(50),
  id_cidade int not null,
  constraint fk_id_cidade_filial
    foreign key(id_cidade) references Cidade(id)
);


-- b) Listar o valor do produto mais caro.
SELECT MAX(preco) AS ProdutoMaisCaro FROM Produto;

-- c) Obter a média dos preços dos produtos.
SELECT AVG(preco) AS MediaPreco FROM Produto;

-- d) Listar o nome dos produtos vendidos pela filial “f3”. (joins)
SELECT Produto.nome_categoria
FROM Filial
JOIN Vende ON Filial.id = Vende.id_produto
JOIN Produto ON Vende.id_produto = Produto.id
WHERE Filial.nome = 'f3';

-- e) Listar os nomes e números de RG dos funcionários que moram no Rio Grande do Sul e tem salário superior a R$ 500,00. (joins)
SELECT nome, rg
FROM Empregado
WHERE ct= 'RS' AND salario > 500;   


-- 4) Defina a sintaxe SQL para a criação das tabelas LIVRO e CATEGORIA. Na criação das tabelas especifique a seguinte restrição: “Quando uma categoria for excluída, todos os livros da categoria em questão também serão excluídos.” 

CREATE TABLE Categoria (
  id_categoria INT PRIMARY KEY,
  nome_categoria VARCHAR(50) NOT NULL,
  descricao_categoria varchar(100) not null
);

CREATE TABLE Livro (
  id_livro INT PRIMARY KEY,
  titulo_livro VARCHAR(100) NOT NULL,
  n_folhas int not null,
  editora varchar(30),
  valor_livro decimal(12,2),
  id_autor int not null,
  id_categoria int not null,
  FOREIGN KEY (id_categoria) 
    REFERENCES Categoria(id_categoria) ON DELETE CASCADE
);



-- 5) Defina a sintaxe SQL para resolver as seguintes consultas: (NÃO ESQUEÇA de usar JOINS nas consultas que envolverem mais de uma tabela)

-- a) Mostrar o número total de vendas realizadas. 
SELECT COUNT(*) AS total_vendas
FROM Venda
JOIN Cliente ON Venda.id_cliente = Cliente.id_cliente;

-- b) Listar os títulos e valores dos livros da categoria “banco de Dados’. Mostra também o nome da categoria. 
SELECT Livro.titulo_livro, Livro.valor_livro, Categoria.nome_categoria
FROM Livro
JOIN Categoria ON Livro.id_categoria = Categoria.id_categoria
WHERE Categoria.nome_categoria = 'Banco de Dados';

-- c) Listar os  títulos e nome dos autores dos livros que custam mais que R$ 300,00.Listar os nomes dos clientes juntamente com o nome da cidade onde moram e UF.
SELECT titulo_livro, id_autor 
FROM Livro 
WHERE valor_livro > 300;

SELECT Cliente.nome, Cidade.nome as cidade, cidades.uf 
FROM Cliente 
JOIN Cidade ON Cliente.cidade_id = Cidade.id;


-- d) Listar os nomes dos clientes juntamente com os nomes de todos os livros comprados por ele.
SELECT Cliente.nome as nome_cliente, Livro.titulo_livro as nome_livro 
FROM Cliente 
JOIN Venda ON Cliente.id = Venda.Cliente_id_clicente
JOIN Livro ON Venda.livro_id = Livro.id;


-- e) Listar o código do livro, o tilulo, o nome do autor, dos livros que foram vendidos no mês de março de 2021.
SELECT Livro.id_livro, Livro.titulo_livro, Livro.editora
FROM Livro 
JOIN venda ON Livro.id_livro = Venda.Livro_id_livro
WHERE Venda.data >= '2021-03-01' AND Venda.data <= '2021-03-31';


-- f) Listar o título e o autor dos 5 livros mais vendidos do mês de janeiro.
SELECT Livro.titulo_livro, Autor.nome_autor, COUNT(Venda.id_venda) AS total_vendas
FROM Livro
JOIN Autor ON Livro.id_autor = Autor.id_autor
JOIN Venda ON Livro.id_livro = Venda.id_livro
WHERE MONTH(Venda.data_venda) = 1
GROUP BY Livro.id_livro, Autor.id_autor
ORDER BY total_vendas DESC
LIMIT 5;

-- g) Mostrar o nome do cliente que comprou o livro com o título ‘Banco de dados powerful’).
SELECT Cliente.nome_cliente
  FROM Livro  
JOIN Venda ON Livro.id_livro = Venda.id_livro
JOIN Cliente ON Venda.id_cliente = Cliente.id_cliente
WHERE Livro.titulo_livro = 'Banco de dados powerful';
