-- Informe o nome e o valor atual dos produtos que foram
-- vendidos no mês 11

SELECT p.nome as produto, p.preco, v.data_venda
  FROM produtos p, vendas_itens vi, vendas v
    WHERE p.id = vi.id_produto and 
          vi.id_venda = v.id and
          v.data_venda >= '2022-10-01' and
          v.data_venda <= '2022-11-30'