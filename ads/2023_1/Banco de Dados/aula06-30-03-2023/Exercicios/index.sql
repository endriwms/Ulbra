    -- TABELAS --

-- Clientes(id, nome)
-- Livros (id, titulo, valor_unit)
-- Autores(id, nome)
-- Autores_livros(id_autor, id_livro)
-- Vendas(id, data, id_cliente)
-- vendas_livros(id, id_livro, qtd, valor_unit)

-- Crie uma view chamada "livros_mais_vendidos" que exiba o título, autor, preço e a quantidade de vezes que cada livro foi vendido.
CREATE VIEW livros_mais_vendidos AS
SELECT l.titulo, a.nome AS autor, l.valor_unit, sum(vl.qtd) AS qtd_vendas
  FROM livro l
    INNER JOIN autores_livros al ON l.id = al.id_livro
    INNER JOIN autores a ON al.id_autor = a.id
    INNER JOIN vendas_livros vl ON l.id = vl.id_livro
GROUP BY l.id
ORDER BY qtd_vendas DESC

-- Resultado esperado:
-- ____________________________________________________
-- | Titulo        | Autor  | valor_unit | qtd_vendas |
-- |---------------+--------+------------+------------|
-- | FDB           | Cassio |   69,90    |    300     |
-- | DBA Master    | Cassio |   100,00   |    200     |
-- | Algoritmos II | Ramon  |   89,99    |    100     |
-- |__________________________________________________|

-- Crie uma view que lista os autores que nunca venderam livros.
CREATE VIEW autores_que_nunca_venderam AS
SELECT id, nome
  FROM autores a
WHERE a.id NOT IN (
  SELECT DISTINCT id_autor
  FROM autores_livros
)

-- Use a sua criatividade e crie uma view que se aplique nessa modelagem.
-- Mostrar as vendas realizadas por cada cliente, com o nome do cliente, a data da venda, o título do livro vendido, a quantidade vendida e o valor total da venda. 
CREATE VIEW vendas_por_cliente AS
SELECT c.nome AS cliente, 
       v.data AS data_venda, 
       l.titulo AS titulo_livro, 
       vl.qtd AS quantidade_vendida, 
       (vl.qtd * l.valor_unit) AS valor_total_venda
  FROM Vendas v
    JOIN vendas_livros vl ON v.id = vl.id_venda
    JOIN Livros l ON vl.id_livro = l.id
    JOIN Clientes c ON v.id_cliente = c.id;

-- Resultado esperado:
-- __________________________________________________________________________________
-- | cliente   | data_venda  |    titulo_livro     | qtd_vendas | valor_total_venda |
-- |-----------+------------+----------------------+------------+-------------------| 
-- | Felipe    | 2023-01-2  |   Harry Potter       |      2     |       100.00      |
-- | Endirw    | 2023-03-30 |   O Hobbit           |      1     |       60.00       |
-- | Mateus    | 2020-05-12 |   O Senhor dos Anéis |      3     |       105.00      |
-- |________________________________________________________________________________|