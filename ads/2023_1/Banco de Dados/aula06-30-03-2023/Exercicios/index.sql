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
-- ____________________________________________________
-- | Titulo        | Autor  | valor_unit | qtd_vendas |
-- |---------------+--------+------------+------------|
-- | FDB           | Cassio |   69,90    |    100     |
-- | DBA Master    | Cassio |   100,00   |    200     |
-- | Algoritmos II | Ramon  |   89,99    |    300     |

-- Crie uma view que lista os autores que nunca venderam livros.
CREATE VIEW autores_que_nunca_venderam AS
SELECT id, nome
  FROM autores a
WHERE a.id NOT IN (
  SELECT DISTINCT id_autor
  FROM autores_livros
)
-- Use a sua criatividade e crie uma view que se aplique nessa modelagem.
