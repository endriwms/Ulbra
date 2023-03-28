-- 1) Escreva uma consulta que retorne o nome do cliente, a soma do valor total das compras e o número total de pedidos feitos por cada cliente, apenas para aqueles que fizeram pelo menos três pedidos. Use um inner join entre as tabelas "clientes" e "pedidos" e agrupe os resultados pelo nome do cliente.

SELECT c.nome AS nome_cliente, 
       SUM(pedidos.valor_total) AS valor_total_compras,
       COUNT(pedidos.id) AS num_pedidos
FROM Clientes c
  INNER JOIN Pedidos p ON c.id = p.cliente_id
GROUP BY c.nome
HAVING COUNT(p.id) >= 3;

-- 2) Escreva uma consulta que retorne o nome do produto, a média do preço de venda e a soma total de unidades vendidas por categoria de produto. Use um left join entre as tabelas "produtos" e "vendas" e agrupe os resultados pela categoria do produto.

SELECT p.id, p.categoria AS categoria, 
       p.nome AS nome_produto,
       AVG(v.preco_venda) AS media_preco_venda,
       SUM(v.unidades_vendidas) AS total_unidades_vendidas
FROM Produtos p
  LEFT JOIN Vendas v ON p.id = v.produto_id
GROUP BY p.categoria;

-- 3) Escreva uma consulta que retorne o nome do fornecedor, o nome do produto e o número total de unidades compradas por fornecedor e por produto, apenas para aqueles com mais de 100 unidades compradas. Use um inner join entre as tabelas "fornecedores", "produtos" e "compras" e agrupe os resultados pelo nome do fornecedor e pelo nome do produto.

SELECT f.id AS id_fornecedor,
       f.nome AS nome_fornecedor, 
       p.nome AS nome_produto, 
       SUM(cp.unidades) AS total_unidades_compradas
FROM Fornecedores f
  INNER JOIN Compras c 
    ON f.id = c.id_fornecedor
  INNER JOIN compras_produtos cp 
    ON c.id_compra = c.id
  INNER JOIN produtos p
    ON p.id = cp.id_produto  
GROUP BY f.nome, 
         p.nome;
HAVING sum(cp.unidades) >= 100

--  | id_fornecedor | nome_fornecedor | nome_produto | total_unidades_compradas |
--  |---------------|-----------------|--------------|--------------------------|
--  | 1             | Fornecedor A    | Produto 1    | 150                      |
--  | 1             | Fornecedor A    | Produto 2    | 200                      |
--  | 2             | Fornecedor B    | Produto 3    | 300                      |
--  | 3             | Fornecedor C    | Produto 4    | 120                      |
--  | 3             | Fornecedor C    | Produto 5    | 170                      |


-- 4) Escreva uma consulta que retorne o nome do departamento, o nome do funcionário e a média do salário dos funcionários em cada departamento, apenas para aqueles com uma média de salário superior a R$ 5000. Use um left join entre as tabelas "funcionarios" e "departamentos" e agrupe os resultados pelo nome do departamento e pelo nome do funcionário.

SELECT d.nome AS departamentos, 
       f.nome AS funcionarios, 
       AVG(f.salario) AS media_salario
FROM Departamentos d
  LEFT JOIN Funcionarios f ON d.id = f.id_departamento
GROUP BY d.nome, 
         f.nome
HAVING AVG(f.salario) > 5000;

-- 5) Escreva uma consulta que retorne o nome do cliente, o nome do produto e a soma do valor total das compras feitas por cada cliente para cada produto. Use um right join entre as tabelas "clientes" e "compras" e um inner join entre as tabelas "produtos" e "compras" e agrupe os resultados pelo nome do cliente e pelo nome do produto.

SELECT clientes.nome AS nome_cliente, 
       produtos.nome AS nome_produto, 
       SUM(compras.valor_total) AS total_compras
FROM compras 
  INNER JOIN produtos ON compras.id_produto = produtos.id 
  RIGHT JOIN clientes ON compras.id_cliente = clientes.id
GROUP BY clientes.nome, 
         produtos.nome

