CREATE TABLE participante (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL
);

CREATE TABLE evento (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    data DATE NOT NULL,
    descricao VARCHAR(255)
);

CREATE TABLE ingresso (
    id INT AUTO_INCREMENT PRIMARY KEY,
    evento_id INT NOT NULL,
    preco DECIMAL(10, 2) NOT NULL,
    tipo VARCHAR(50) NOT NULL,
    CONSTRAINT fk_evento_ingresso
        FOREIGN KEY (evento_id) REFERENCES evento(id)
        ON DELETE RESTRICT
        ON UPDATE CASCADE
);

CREATE TABLE palestrante (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL,
    bio VARCHAR(255)
);

CREATE TABLE workshop (
    id INT AUTO_INCREMENT PRIMARY KEY,
    evento_id INT NOT NULL,
    palestrante_id INT NOT NULL,
    titulo VARCHAR(255) NOT NULL,
    descricao TEXT,
    CONSTRAINT fk_evento_workshop
        FOREIGN KEY (evento_id) REFERENCES evento(id)
        ON DELETE RESTRICT
        ON UPDATE CASCADE,
    CONSTRAINT fk_palestrante_workshop
        FOREIGN KEY (palestrante_id) REFERENCES palestrante(id)
        ON DELETE RESTRICT
        ON UPDATE CASCADE
);

CREATE TABLE participacao (
    id INT AUTO_INCREMENT PRIMARY KEY,
    evento_id INT NOT NULL,
    participante_id INT NOT NULL,
    esta_pago BOOLEAN NOT NULL DEFAULT 0,
    CONSTRAINT fk_evento_participacao
        FOREIGN KEY (evento_id) REFERENCES evento(id)
        ON DELETE RESTRICT
        ON UPDATE CASCADE,
    CONSTRAINT fk_participante_participacao
        FOREIGN KEY (participante_id) REFERENCES participante(id)
        ON DELETE RESTRICT
        ON UPDATE CASCADE
);

-- Populando minhas tabelas
INSERT INTO participante (nome, email) VALUES
('Endriw Schiavenato', 'endriwmsi@example.com'),
('Felipe da Rosa', 'felipedarosa@example.com'),
('Mateus Schefer', 'mateusschef@example.com'),
('Leonardo de Souza', 'leocalvo@example.com');

INSERT INTO evento (nome, data, descricao) VALUES
('Conferência de POO e BD', '2023-05-10', 'Evento para Programadores C# & DBAs'),
('Conferência de Estrutura de Dados', '2023-06-15', 'Evento para desenvolvedores Back-end'),
('Conferência do PHP', '2023-07-20', 'Evento para desenvolvedores Web'),
('Conferência do Java', '2023-08-05', 'Evento para iniciantes em Java');

INSERT INTO ingresso (evento_id, preco, tipo) VALUES
(1, 150.00, 'Ingresso Regular'),
(1, 300.00, 'Ingresso VIP'),
(2, 50.00, 'Ingresso Regular'),
(3, 80.00, 'Ingresso Regular');

INSERT INTO palestrante (nome, email, bio) VALUES
('Cassio Costa', 'cassiocosta@example.com', 'Professor de POO e Banco de Dados'),
('Ramon Lummertz', 'ramonlummertz@example.com', 'Professor de Algoritmos'),
('Vinicius Magnus', 'viniciusmagnus@example.com', 'Professor de desenv. web'),
('Lucas Fogaça', 'lucasfogaca@example.com', 'Professor de Java');

INSERT INTO workshop (evento_id, palestrante_id, titulo, descricao) VALUES
(4, 4, 'Conceitos de POO e Banco de Dados', 'Aprenda os conceitos de POO e Banco de dados.'),
(4, 4, 'Estrutura de dados', 'Aprenda melhorar o desempenho do seu sistema com técnicas avançadas de algoritmos.'),
(2, 2, 'Como desenvolver usando codeigniter', 'Aprenda a desenvolver aplicações web usando PHP.'),
(1, 1, 'Laboratório de programação', 'Aprenda os conceitos básicos da linguagem Java.');

INSERT INTO participacao (evento_id, participante_id, esta_pago) VALUES
(1, 1, 1),
(1, 2, 0),
(2, 3, 1),
(3, 4, 0);

-- VIEWS
-- Faça uma view que retorna informações de todos os participantes que já participaram de um evento
CREATE VIEW vw_participantes_evento AS
SELECT p.id,
       p.nome,
       p.email,
       e.nome AS nome_evento,
       e.data AS data_evento
FROM participante p
    INNER JOIN participacao pa
        ON p.id = pa.participante_id
    INNER JOIN evento e
        ON e.id = pa.evento_id;

-- Faça uma view que retorna informações sobre todos os workshops de um determinado evento, incluindo o nome do palestrante
CREATE VIEW vw_workshops_evento AS
SELECT w.id,
       w.titulo,
       w.descricao,
       e.nome AS nome_evento,
       p.nome AS nome_palestrante
FROM workshop w
    INNER JOIN evento e
        ON e.id = w.evento_id
    INNER JOIN palestrante p
        ON p.id = w.palestrante_id;

-- Faça uma view que retorna informações sobre os ingressos disponíveis para um determinado evento, juntamente com o número de participantes que já compraram cada tipo de ingresso

CREATE VIEW vw_ingressos_disponiveis AS
SELECT i.id,
       i.tipo,
       i.preco,
       COUNT(pa.id) AS qtd_comprados,
       i.preco * COUNT(pa.id) AS receita_total
FROM ingresso i
    LEFT JOIN participacao pa
        ON pa.evento_id = i.evento_id AND pa.esta_pago = 1
    GROUP BY i.id;

-- Stored Procedures
-- Faça uma SP que recebe o id de um participante e retorna todos os eventos que ele participou, incluindo o nome do evento, a data e o tipo de ingresso que ele comprou:
DELIMITER //

CREATE PROCEDURE sp_eventos_participante (IN p_participante_id INT)
BEGIN
    SELECT e.nome, e.data, i.tipo
    FROM evento e
    INNER JOIN ingresso i ON e.id = i.evento_id
    INNER JOIN participacao p ON e.id = p.evento_id
    WHERE p.participante_id = p_participante_id;
END//

DELIMITER ;

CALL sp_eventos_participante(1);

-- Faça uma SP que recebe o nome de um evento e retorna a lista de workshops relacionados a ele, incluindo o nome do palestrante e o título do workshop
DELIMITER //

CREATE PROCEDURE sp_workshops_evento (IN p_evento_nome VARCHAR(255))
BEGIN
    SELECT p.nome AS palestrante, w.titulo
    FROM palestrante p
    INNER JOIN workshop w ON p.id = w.palestrante_id
    INNER JOIN evento e ON w.evento_id = e.id
    WHERE e.nome = p_evento_nome;
END//

DELIMITER ;

CALL sp_workshops_evento('Conferência de POO e BD');

-- Faça uma SP para retornar a quantidade de ingressos vendidos para um determinado evento
DELIMITER //

CREATE PROCEDURE sp_quantidade_ingressos_vendidos (IN p_evento_id INT)
BEGIN
    SELECT COUNT(*) AS quantidade
    FROM participacao p
    INNER JOIN ingresso i ON p.evento_id = i.evento_id
    WHERE i.evento_id = p_evento_id AND p.esta_pago = 1;
END//

DELIMITER ;

CALL sp_quantidade_ingressos_vendidos(1);

-- Faça uma SP para retornar o valor total arrecadado com ingressos vendidos para um determinado evento
DELIMITER //

CREATE PROCEDURE sp_valor_total_arrecadado (IN p_evento_id INT)
BEGIN
    SELECT SUM(i.preco) AS valor_total
    FROM participacao p
    INNER JOIN ingresso i ON p.evento_id = i.evento_id
    WHERE i.evento_id = p_evento_id AND p.esta_pago = 1;
END//

DELIMITER ;

CALL sp_valor_total_arrecadado(1);

-- Faça uma SP para retornar a lista de participantes de um determinado evento que ainda não pagaram o ingresso
DELIMITER //

CREATE PROCEDURE sp_participantes_nao_pagaram (IN p_evento_id INT)
BEGIN
    SELECT participante.nome, participacao.esta_pago
    FROM participante
    INNER JOIN participacao ON participante.id = participacao.participante_id
    WHERE participacao.evento_id = p_evento_id AND participacao.esta_pago = 0;
END//

DELIMITER ;

CALL sp_participantes_nao_pagaram(1);