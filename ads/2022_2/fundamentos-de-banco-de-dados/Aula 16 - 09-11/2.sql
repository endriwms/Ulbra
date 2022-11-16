-- Informe o valor total da venda de codigo 1001

SELECT sum(qtd * val_unitario) AS total
  FROM vendas_itens
    WHERE id_venda = 1001