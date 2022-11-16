-- Liste todos os produtos vendidos no mes de
-- outubro. Ordene do menor preço vendido ao maior

SELECT p.id, p.nome, vi.valor_unit
  FROM produtos p, vendas_itens, vendas v
    WHERE p.id = vi.id_produto and
          v.id = vi.id_venda and
          v.data_venda >= '2022-10-01' and
          v.data_venda <= '2022-10-30'
      ORDER BY vi.valor_unit ASC
