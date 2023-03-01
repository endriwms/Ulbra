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

-- b) Listar o valor do produto mais caro
SELECT MAX(preco) AS ProdutoMaisCaro FROM Produto;

-- c) Obter a média dos preços dos produtos
SELECT AVG(preco) AS MediaPreco FROM Produto;

-- d) Listar o nome dos produtos mais vendidos pela filial "f3". (joins)
SELECT
  FROM vende v
    JOIN id_produto p_id ON v.id_produto = p_id.id_produto
      WHERE v.id_filial = 3
      GROUP BY p_id.nome_produto
      ORDER BY total_vendido DESC;


-- e) Listar os nomes e números de RG dos funcionários que moram no Rio Grande do Sul e tem salário superior a R$ 500,00. (joins)