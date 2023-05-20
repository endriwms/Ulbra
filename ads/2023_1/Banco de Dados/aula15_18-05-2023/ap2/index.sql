CREATE TABLE Pessoas (
  id_pessoa INT PRIMARY KEY,
  nome VARCHAR(100),
  login VARCHAR(50),
  senha VARCHAR(50)
);

CREATE TABLE Cliente (
  id_cliente INT PRIMARY KEY,
  id_pessoa INT,
  numero_corridas INT,
  FOREIGN KEY (id_pessoa)
      REFERENCES Pessoas(id_pessoa)
);

CREATE TABLE Administradores (
  id_administrador INT PRIMARY KEY,
  id_pessoa INT,
  cnpj VARCHAR(20),
  FOREIGN KEY (id_pessoa)
      REFERENCES Pessoas(id_pessoa)
);

CREATE TABLE Funcionarios (
  id_funcionario INT PRIMARY KEY,
  id_pessoa INT,
  cnh VARCHAR(20),
  FOREIGN KEY (id_pessoa)
      REFERENCES Pessoas(id_pessoa)
);

CREATE TABLE Veiculos (
  id_veiculo INT PRIMARY KEY,
  id_administrador INT,
  marca VARCHAR(100),
  ano INT,
  placa VARCHAR(20),
  FOREIGN KEY (id_administrador)
      REFERENCES Administradores(id_administrador)
);

CREATE TABLE Corridas (
  id_corrida INT PRIMARY KEY,
  id_veiculo INT,
  id_cliente INT,
  destino VARCHAR(100),
  data_corrida DATE,
  horario TIME,
  valor DECIMAL(10,2),
  km DECIMAL(10,2),
  FOREIGN KEY (id_veiculo)
      REFERENCES Veiculos(id_veiculo),
  FOREIGN KEY (id_cliente)
      REFERENCES Cliente(id_cliente)
);

CREATE TABLE Despesas (
  id_despesa INT PRIMARY KEY,
  id_administrador INT,
  data_despesa DATE,
  valor DECIMAL(10,2),
  FOREIGN KEY (id_administrador)
      REFERENCES Administradores(id_administrador)
);

-- Inserção de dados na tabela Pessoas
INSERT INTO Pessoas (id_pessoa, nome, login, senha)
VALUES (1, 'João Silva', 'joao.silva', '123456'),
       (2, 'Maria Santos', 'maria.santos', 'abcdef'),
       (3, 'Pedro Souza', 'pedro.souza', 'qwerty');

-- Inserção de dados na tabela Cliente
INSERT INTO Cliente (id_cliente, id_pessoa, numero_corridas)
VALUES (1, 1, 5),
       (2, 2, 3),
       (3, 3, 2);

-- Inserção de dados na tabela Administradores
INSERT INTO Administradores (id_administrador, id_pessoa, cnpj)
VALUES (1, 2, '12345678901234'),
       (2, 3, '98765432109876');

-- Inserção de dados na tabela Funcionarios
INSERT INTO Funcionarios (id_funcionario, id_pessoa, cnh)
VALUES (1, 1, 'AB123456'),
       (2, 3, 'CD789012');

-- Inserção de dados na tabela Veiculos
INSERT INTO Veiculos (id_veiculo, id_administrador, marca, ano, placa)
VALUES (1, 1, 'Fiat Uno', 2020, 'ABC123'),
       (2, 2, 'Volkswagen Gol', 2018, 'DEF456');

-- Inserção de dados na tabela Corridas
INSERT INTO Corridas (id_corrida, id_veiculo, id_cliente, destino, data_corrida, horario, valor, km)
VALUES (1, 1, 1, 'Shopping', '2023-05-18', '10:30:00', 30.50, 15.3),
       (2, 2, 1, 'Restaurante', '2023-05-18', '12:45:00', 25.00, 12.8),
       (3, 2, 3, 'Cinema', '2023-05-18', '19:15:00', 15.75, 8.2);

-- Inserção de dados na tabela Despesas
INSERT INTO Despesas (id_despesa, id_administrador, data_despesa, valor)
VALUES (1, 1, '2023-05-17', 150.00),
       (2, 2, '2023-05-18', 200.50);

-- Crie uma View que retorne as corridas por clientes, veículos, administradores e funcionários.
CREATE VIEW ViewCorridas AS
SELECT c.id_corrida, p_cliente.nome AS nome_cliente,
       v.marca AS marca_veiculo,
       a.id_administrador,
       p_administrador.nome AS nome_administrador,
       f.id_funcionario,
       p_funcionario.nome AS nome_funcionario,
       c.destino,
       c.data_corrida,
       c.horario,
       c.valor,
       c.km
FROM Corridas c
    JOIN Cliente cli
        ON c.id_cliente = cli.id_cliente
    JOIN Pessoas p_cliente
        ON cli.id_pessoa = p_cliente.id_pessoa
    JOIN Veiculos v
        ON c.id_veiculo = v.id_veiculo
    JOIN Administradores a
        ON v.id_administrador = a.id_administrador
    JOIN Pessoas p_administrador
        ON a.id_pessoa = p_administrador.id_pessoa
    JOIN Funcionarios f
        ON v.id_administrador = f.id_funcionario
    JOIN Pessoas p_funcionario
        ON f.id_pessoa = p_funcionario.id_pessoa;

-- Faça um SQL que totalize através da View quantas corridas foram feitas por administradora e qual a km média para o mês de julho de 2015.
SELECT a.id_administrador,
       p_administrador.nome AS nome_administrador,
       COUNT(*) AS total_corridas, AVG(c.km) AS km_media
FROM Corridas c
    JOIN Veiculos v
        ON c.id_veiculo = v.id_veiculo
    JOIN Administradores a
        ON v.id_administrador = a.id_administrador
    JOIN Pessoas p_administrador
        ON a.id_pessoa = p_administrador.id_pessoa
WHERE c.data_corrida >= '2015-07-01' AND c.data_corrida < '2015-08-01'
GROUP BY a.id_administrador, p_administrador.nome;


-- Faça um TRIGGER para armazenar em uma tabela chamada FluxoCaixa(...)
DELIMITER //

CREATE TRIGGER despesa_trigger AFTER INSERT, DELETE ON Despesas
FOR EACH ROW
BEGIN
    DECLARE total_pagamentos DECIMAL(10, 2);

    -- Calcula o total de pagamentos para o mês atual
    SELECT COALESCE(SUM(valor), 0) INTO total_pagamentos
    FROM Despesas
    WHERE MONTH(data_despesa) = MONTH(NOW());

    -- Atualiza a tabela FluxoCaixa
    IF EXISTS (SELECT * FROM FluxoCaixa WHERE mes = MONTH(NOW())) THEN
        -- Se já existir um registro para o mês atual, atualiza o saldo
        UPDATE FluxoCaixa
        SET saldo = total_pagamentos
        WHERE mes = MONTH(NOW());
    ELSE
        -- Se não existir, insere um novo registro
        INSERT INTO FluxoCaixa (mes, saldo)
        VALUES (MONTH(NOW()), total_pagamentos);
    END IF;
END //

DELIMITER ;

-- Crie uma Stored Procedure que faça a inclusão ou a exclusão na tabela FluxoCaixa e refatore a trigger da questão anterior para utilizar essa stored procedure.
DELIMITER //

CREATE PROCEDURE atualizarFluxoCaixa(IN valor DECIMAL(10,2))
BEGIN
    DECLARE saldo_anterior DECIMAL(10,2);

    -- Obtém o saldo anterior do mês
    SELECT saldo INTO saldo_anterior
    FROM FluxoCaixa
    WHERE mes = MONTH(NOW());

    -- Verifica se o registro foi inserido ou excluído
    IF valor >= 0 THEN
        -- Inclusão de valor
        SET saldo_anterior = saldo_anterior + valor;
    ELSE
        -- Exclusão de valor
        SET saldo_anterior = saldo_anterior - ABS(valor);
    END IF;

    -- Atualiza o saldo acumulado do mês na tabela FluxoCaixa
    IF saldo_anterior IS NULL THEN
        -- Se não houver registro para o mês atual, insere um novo registro
        INSERT INTO FluxoCaixa (mes, saldo)
        VALUES (MONTH(NOW()), saldo_anterior);
    ELSE
        -- Caso contrário, atualiza o saldo acumulado
        UPDATE FluxoCaixa
        SET saldo = saldo_anterior
        WHERE mes = MONTH(NOW());
    END IF;
END //

DELIMITER ;


-- Refatorando a trigger anterior para utilizar essa stored procedure
DELIMITER //

CREATE TRIGGER despesa_trigger AFTER INSERT, DELETE ON Despesas
FOR EACH ROW
BEGIN
    CALL atualizarFluxoCaixa(NEW.valor);
END //

DELIMITER ;
