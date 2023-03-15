
CREATE TABLE produtos (
  id
  nome
);

CREATE TABLE filiais (
  id
  nome
  id_cid
);

CREATE TABLE vendas (
  id
  date
  id_filial
);

-- Quantas aguas foram vendas no mes de fevereiro?

SELECT p.nome, sum(vp.quant) as total
FROM produtos p
  INNER JOIN vendas_produtos vp
    ON p.id = vp.produtos_id
  INNER JOIN vendas v
    ON v.id = vp.venda_id
GROUP BY p.nome
WHERE v.data >= '2023-02-01' AND v.data <= '2023-02-28'
  AND p.nome = 'água mineral'


SELECT nome as produto, max(valor) as mais_alto
from produtos
  group by nome
  order by mais_alto desc
limit 1

SELECT nome AS categoria, max(valor) AS mais_alto
FROM categorias c
  INNER JOIN produto
    ON c.id = p.produtos_id
GROUP BY c.nome

SELECT nome AS produto,
FROM produtos
WHERE valor =
              ( 
                SELECT max(valor)
                FROM produtos p
                WHERE p.id = produtos.id
              )

-- Mostre os 5 clientes que mais compraram no mes de Fevereiro
SELECT c.nome as cliente, sum(vp.qtd * vp.valor_unit) as valor_total_compra
FROM clientes c
  INNER JOIN vendas v
    ON v.id_cliente = c.id
  INNER JOIN vendas_produtos vp
    ON v.id = vp.venda_id
  INNER JOIN produtos p
    ON p.id = vp.produto_id
WHERE v.data >= '2023-02-01' and v.data <= '2023-02-28'
                AND vp.valor_unit = p.valor
GROUP BY c.nome 
  HAVING valor_total_compra > 5000
ORDER BY valor_total_compra desc
limit 5