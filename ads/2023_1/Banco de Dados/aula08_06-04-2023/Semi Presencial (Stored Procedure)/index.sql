-- Crie uma tabela Pessoas que contenha as colunas id, nome, sexo e data_nascimento. --
CREATE TABLE Pessoas (
  id INT PRIMARY KEY,
  nome VARCHAR(255),
  sexo VARCHAR(10),
  data_nascimento DATE
);



-- 1) Crie uma Store Procedure onde sejam possíveis passar como parâmetro as informações para Nome, Sexo e Data_Nascimento. Esta Stored Procedure deverá consultar no banco de dados o último ID gerado na tabela de Pessoas, incrementar este ID e inserir um registro nesta tabela com os dados enviados por parâmetro.

CREATE PROCEDURE InserirPessoa
  @Nome VARCHAR(255),
  @Sexo VARCHAR(10),
  @Data_Nascimento DATE
AS
BEGIN
  DECLARE @UltimoID INT;
  SELECT @UltimoID = MAX(id) FROM Pessoas;
  SET @UltimoID = COALESCE(@UltimoID, 0) + 1;
  
  INSERT INTO Pessoas (id, nome, sexo, data_nascimento)
  VALUES (@UltimoID, @Nome, @Sexo, @Data_Nascimento);
END;

EXEC InserirPessoa 'João Silva', 'M', '1990-01-01';




-- 2) Crie uma Stored Procedure que mostre quantos Homens e quantas Mulheres têm cadastrados.
CREATE PROCEDURE ContarHomensMulheres
AS
BEGIN
  SELECT 
    SUM(CASE WHEN sexo = 'M' THEN 1 ELSE 0 END) AS TotalHomens,
    SUM(CASE WHEN sexo = 'F' THEN 1 ELSE 0 END) AS TotalMulheres
  FROM Pessoas;
END;

EXEC ContarHomensMulheres;




-- 3) Crie uma Stored Procedure que mostre quantos Homens são menores e maiores de idade, e quantas Mulheres são maiores e menores de idade.
CREATE PROCEDURE ContarIdadesPorSexo
AS
BEGIN
  SELECT 
    SUM(CASE WHEN sexo = 'M' AND DATEDIFF(YEAR, data_nascimento, GETDATE()) < 18 THEN 1 ELSE 0 END) AS HomensMenores,
    SUM(CASE WHEN sexo = 'M' AND DATEDIFF(YEAR, data_nascimento, GETDATE()) >= 18 THEN 1 ELSE 0 END) AS HomensMaiores,
    SUM(CASE WHEN sexo = 'F' AND DATEDIFF(YEAR, data_nascimento, GETDATE()) < 18 THEN 1 ELSE 0 END) AS MulheresMenores,
    SUM(CASE WHEN sexo = 'F' AND DATEDIFF(YEAR, data_nascimento, GETDATE()) >= 18 THEN 1 ELSE 0 END) AS MulheresMaiores
  FROM Pessoas;
END;

EXEC ContarIdadesPorSexo;

--------------------------------------------------------------------------------------------------------------------------------


-- Crie uma Stored Procedure que receba dois Números. Esta Procedure ao ser executada deverá mostrar o retorno obtido se estes dois números fossem somados, diminuídos, multiplicados e divididos.
CREATE PROCEDURE OperacoesMatematicas
  @numero1 decimal(10,2),
  @numero2 decimal(10,2)
AS
BEGIN
  SELECT
    @numero1 + @numero2 AS Soma,
    @numero1 - @numero2 AS Subtracao,
    @numero1 * @numero2 AS Multiplicacao,
    CASE
      WHEN @numero2 <> 0 THEN @numero1 / @numero2
      ELSE NULL
    END AS Divisao;
END;

EXEC OperacoesMatematicas @numero1 = 10, @numero2 = 5;