-- Mostre os 3 alunos que mais compraram no mês de março e o valor (Join e Group by)
SELECT a.nome as alunos, sum(vp.quantidade * vp.valor_unit) as valor_total_compra  
FROM alunos a
    inner join vendas v
      on v.alunos_id = a.id
    inner join vendas_produtos vp 
      on v.id = vp.venda_id
WHERE v.venda >= '2023-03-01' and v.venda <= '2023-03-31'
GROUP by a.nome
ORDER by valor_total_compra desc
limit 3


-- Mostre todos os produtos cuja quantidade em estoque seja maior que 100 (Group by e Having)
SELECT id, wtipo, SUM(quantidade) AS 'Quantidade em Estoque'
FROM produtos
GROUP BY tipo
HAVING SUM(quantidade) > 100


-- Mostre o cargo, o nome e o salário dos funcionários referente ao cargo específico
SELECT c.nome as Cargo, f.nome as Funcionarios, f.salario_funcionário as Salario
FROM Cargo c
LEFT JOIN Funcionarios f ON c.id_cargo = f.id_funcionario