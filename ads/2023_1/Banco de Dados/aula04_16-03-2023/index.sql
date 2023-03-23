-- Criar Modelagem Orçamentos  
-- produtos (id, nome, valor, saldo) 
    -- Saldo é a quantidade atual em estoque de um produto

-- Orcamentos ( id, data, status)
    -- em orçamento
    -- vendido
    -- cancelado

-- Orçamentos_itens(id_prod, id_orc, valor_unit, quantidade, valor_total_item)
    -- valor total do item é o valor_unit * quantidade. No insert já tem que informar.

-- Criar os scritps para criação do esquema do banco e as tabelas.

CREATE TABLE produtos (
    id INT PRIMARY KEY,
    nome VARCHAR(50),
    valor DECIMAL(10,2),
    saldo INT
);

CREATE TABLE orcamentos (
    id INT PRIMARY KEY,
    data DATE,
    status ENUM('em orçamento', 'vendido', 'cancelado')
);

CREATE TABLE orcamentos_itens (
    id_prod INT,
    id_orc INT,
    valor_unit DECIMAL(10,2),
    quantidade INT,
    valor_total_item DECIMAL(10,2),
    PRIMARY KEY (id_prod, id_orc),
    FOREIGN KEY (id_prod) REFERENCES produtos(id),
    FOREIGN KEY (id_orc) REFERENCES orcamentos(id)
);

-- Criar UMA view que dê condições de:
    -- Lista de orçamentos por produto
    CREATE VIEW vw_orcamentos_por_produto
    SELECT p.nome AS produto, 
           o.id AS orcamento, 
           o.data, 
           oi.quantidade, 
           oi.valor_unit, 
           oi.valor_total_item
    FROM produtos p
        INNER JOIN orcamentos_itens oi ON oi.id_prod = p.id
        INNER JOIN orcamentos o ON o.id = oi.id_orc
    ORDER BY p.nome, o.id;

    -- Valor total de produtos orçados por período
        -- ex. valor total dos produtos orçados no mes de março de 2022
    CREATE VIEW vw_valor_total_orcado
    SELECT SUM(oi.valor_total_item) AS valor_total_orcado
    FROM orcamentos_itens oi
        INNER JOIN orcamentos o ON o.id = oi.id_orc
    WHERE o.data BETWEEN '2022-03-01' AND '2022-03-31';

    -- Produtos que tem “Computador” no nome e que tem quantidade em estoque.
    CREATE VIEW vw_produtos_computador_em_estoque
    SELECT id, nome, valor, saldo
    FROM produtos
    WHERE nome LIKE '%Computador%' AND saldo > 0;

    -- Os 10 produtos mais orçados no mês de setembro de 2014 e que ainda tem saldo em estoque. Somente os produtos com o valor acima de R$ 500.00.
    CREATE VIEW produtos_mais_orcados
    SELECT p.id, 
           p.nome, 
           p.valor, 
           p.saldo, SUM(oi.quantidade) AS total_orcado
    FROM produtos p
        INNER JOIN orcamentos_itens oi ON oi.id_prod = p.id
        INNER JOIN orcamentos o ON oi.id_orc = o.id
    WHERE o.status = 'em orçamento' AND o.data BETWEEN '2014-09-01' AND '2014-09-30'
    GROUP BY p.id
    HAVING p.saldo > 0 AND p.valor > 500
    ORDER BY total_orcado DESC
    LIMIT 10;

-- Faça uma consulta utilizando a view para acrescentar 20% nos produtos que o saldo em estoque é menor ou igual a 5.
    -- id, nome do produto, valor atual, valor_mais20
    SELECT id,
           nome, 
           valor, 
           valor*1.20 AS valor_mais20
    FROM produtos_saldo_baixo;

-- Delete todos os produtos que não foram orçados.
    DELETE FROM produtos
    WHERE id NOT IN (SELECT DISTINCT id_prod FROM orcamentos_itens);

-- Explique quando utilizar o GROUP BY, de um exemplo sql.
    -- O GROUP BY é utilizado em SQL para agrupar resultados de acordo com valores de uma ou mais colunas de uma tabela.
    -- EX:
    SELECT nome_vendedor, SUM(valor_venda) AS total_vendas
    FROM vendas
    GROUP BY nome_vendedor;

   -- | nome_vendedor   |	total_vendas    |
   -- |-----------------+-------------------|
   -- | João	        |    230.00         |
   -- | Maria	        |    270.00         |
   -- | Carlos	        |    250.00         |

-- Explique quando utilizar o HAVING, de um exemplo sql.
    -- HAVING é utilizado em SQL para filtrar os resultados de uma consulta que inclui o comando GROUP BY. Ele é similar ao comando WHERE, mas enquanto o WHERE é utilizado para filtrar os dados antes da agregação, o HAVING é utilizado para filtrar os grupos formados pela agregação.
    -- EX:
    SELECT nome_vendedor, SUM(valor_venda) AS total_vendas
    FROM vendas
    GROUP BY nome_vendedor
    HAVING total_vendas > 200.00;

    -- | nome_vendedor   |	total_vendas     |
    -- |-----------------+-------------------|
    -- | Maria	         |    250.00         |
    -- | Carlos	         |    250.00         |


-- Explique quando utilizar o UNION, de um exemplo sql.
    -- UNION é utilizado em SQL para combinar os resultados de duas ou mais consultas SELECT em um único conjunto de resultados. As consultas devem ter a mesma quantidade de colunas e os tipos de dados nas colunas correspondentes devem ser compatíveis.
    -- EX:
    SELECT nome, cargo
    FROM funcionarios1
    UNION
    SELECT nome, cargo
    FROM funcionarios2;

    -- |   nome    |        cargo         |
    -- |-----------+----------------------|
    -- | João      | Analista de sistemas |
    -- | Maria     | Gerente de projetos  |
    -- | Carlos    | Desenvolvedor        |
    -- | Ana       | Analista de sistemas |
    -- | Tiago     | Gerente de vendas    |
    -- | Renata    | Analista financeiro  |


-- Explique quando utilizar o LEFT JOIN, de um exemplo sql.
    -- LEFT JOIN é utilizado quando você deseja retornar todos os registros da tabela da esquerda (a tabela à esquerda do JOIN), mesmo que não haja correspondência na tabela da direita (a tabela à direita do JOIN).
    -- EX: 
    SELECT clientes.nome, pedidos.numero, pedidos.data, pedidos.valor
    FROM clientes
        LEFT JOIN pedidos ON clientes.id = pedidos.cliente_id;

    -- |  nome  | numero |    data    |  valor |
    -- |--------+--------+------------+--------|
    -- | João   |   NULL |    NULL    |   NULL |
    -- | Carlos |   101  | 2022-02-01 |  150.0 |
    -- | Carlos |   102  | 2022-03-15 | 1000.0 |

