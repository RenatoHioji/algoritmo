DROP DATABASE DB;
CREATE DATABASE db;
use db;

create table Produtos(
Cod_Produtos int(5) primary key not null auto_increment,
Nome_Produto varchar(100) not null,
Altura_Produto float(10) not null,
Largura_Produto float(10),
Profundidade_Produto float(10),
Peso_Produto float(10),
Descricao_Produto varchar(300),
Tipo_Produto varchar(50),
Cor_Produto varchar(15),
Valor_Produto float(10)
);
INSERT INTO Produtos 
(Nome_Produto, Altura_Produto, Largura_Produto, Profundidade_Produto, Peso_Produto, Descricao_Produto, Tipo_Produto, Cor_Produto, Valor_Produto)
Values ("Vaso", 1, 2, 3, 400, "Vaso com irrigação automática", "Coleção 1.0", "Azul", 500),
("Arduino", 0.5, 0.2, 0.3, 1, "Arduíno", "Arduíno", "Multicolorido", 50),
("Sensores", 0.2, 0.4, 0.5, 0.3, "Kit com os sensores necessários para a utilização do arduíno", "Sensores", "Multicolorido", 100),
("Vasos", 0.4, 1, 2,  5, "Kit de vasos com 1 vaso grande, 1 vaso pequeno e 1 vaso médio", "Kits", "Cinza", 300),
("Kit Sensores", 0.54, 0.14, 0.35, 0.38, "Kit 5 conjuntos com os sensores necessários para a utilização do arduíno", "Kits", "Multicolorido", 450); 
create table PlantasOrnamentais(
	Nome_Cientifico varchar(200) primary key not null,
    Nome_Popular varchar(100),
    Data_Fim_Florescimento Date,
    Data_Inicio_Florescimento Date,
    Idade_Minima_Florescimento integer(5),
    Quantidade_Agua_Regacao float(10),
    Temperatura_Ideal float(10),
    Umidade_Ideal float(10),
    Foto_Planta varchar(300),
    Dicas_Planta varchar(1000),
    Iluminação_Ideal float(10)
);

INSERT INTO PlantasOrnamentais(Nome_Cientifico, Nome_Popular, Data_Fim_Florescimento, Data_Inicio_Florescimento, Idade_Minima_Florescimento,
Quantidade_Agua_Regacao, Temperatura_Ideal, Umidade_Ideal, Foto_Planta, Dicas_Planta, Iluminação_Ideal) VALUES
("Echeveria", "Echeveria", "2023-05-22", "2023-05-02", 5, 500, 25, 25, "../img/echeveria.png", "Planta deve ser muito bem iluminada e possuir uma terra adubada!", 50),
("Echeveria-Lótus", "Lótus", "2022-12-12", "2023-11-02", 3, 300, 30, 31, "../img/echeveria-lotus.png", "Planta deve ser muito bem iluminada e estar suspensa próxima à água!", 30),
("Rosa Gallica", "Rosa Vermelha", "2023-05-22", "2023-02-22", 1, 200, 40, 53, "../img/rosa.png", "Planta que necessita de atenção!", 25),
("Anthurium andraeanum", "Antúrio", "2023-06-22", "2023-08-22", 4, 400, 45, 32, "../img/anturio.png", "Planta que lida muito bem com adubagem orgânica de ovos", 25),
("Tradescantia spathacea", "Abacaxi Roxo", "2024-01-29", "2023-03-21", 3, 500, 49, 23, "../img/abacaxi-roxo.png", "Planta que necessita de muita água!", 40);

CREATE TABLE Usuario (
	CPF_Usuario varchar(14) primary key  not null,
    Nome_Usuario varchar(100),
    Rua_Usuario varchar(100),
    Bairro_Usuario varchar(100),
    Numero_Usuario int(5),
    CEP_Usuario varchar(9),
    Data_Nascimento date,
    Celular_Usuario varchar(15),
    Email_Usuario varchar(100),
    Foto_Usuario blob,
    Senha_Usuario varchar(100)
);
INSERT INTO  Usuario (CPF_Usuario, Nome_Usuario, Rua_Usuario, Bairro_Usuario, Numero_Usuario, CEP_Usuario, Data_Nascimento, Celular_Usuario, Email_Usuario,
Senha_Usuario) VALUES 
("555.555.555-55", "Renato", "Rua XYZ", "Vila Tupy", 5, "11900-000", "2000-12-23", "(13) 99132-3214", "email@email.com", "23232"),
("444.444.444-44", "Hioji", "Rua XZZ", "Centro", 34, "11900-000", "2003-05-13", "(11) 99322-3564", "email2@email2.com", "2323324562"),
("333.333.333-55", "Odake", "Rua XXYZ", "Vila Paulista", 32, "11900-000", "2013-01-14", "(19) 99154-31111", "email3@email3.com", "233343432"),
("222.222.222-22", "Zezinho", "Rua XYYY", "Vila Hardun", 712, "11900-000", "2012-01-12", "(19) 91285-31564", "email4@email4.com", "234213421"),
("111.111.111-11", "Okamoto", "Rua XKZZ", "Jardim Paulistano", 2178, "11900-000", "2010-01-27", "(19) 92132-3213", "email5@email5.com", "6327423");

CREATE TABLE Bugs (
	Cod_Bugs int(5) primary key not null auto_increment,
    Descricao varchar(300),
    Data_Contrato date,
    Data_Correcao date
);
INSERT INTO Bugs (Descricao, Data_Contrato, Data_Correcao) VALUES ("Tela de login não carrega!", "2023-02-20", "2023-10-20"),
("Perfil não está mostrando as informações!", "2022-01-10", "2023-05-12"),("Carrinho de compra não funciona", "2020-03-11", "2020-04-01"),
("Compra não é realizada!", "2022-01-01", "2022-02-04"),("Informações Erradas nas MinhasPlantas", "2021-04-21", "2022-07-06");
CREATE TABLE Irrigacao(
	ID_Irrigacao INTEGER(5) Primary key not null auto_increment,
    Quantidade_Irrigacao float(10),
    Irrigacao boolean,
	Data_Irrigacao date,
    Tempo_Irrigacao time
);

INSERT INTO Irrigacao(Quantidade_Irrigacao, Irrigacao, Data_Irrigacao, Tempo_Irrigacao) VALUES
(200, 1, "2023-10-20", "08:30"), (450, 1, "2023-01-12", "12:45"), (112, 1, "2023-12-10", "19:47"), (500, 0, "2023-01-21", "10:32"), (450, 0, "2023-03-30", "12:57");

CREATE TABLE Informacao(
	ID_Informacao integer(5) primary key auto_increment,
    Umidade float(10),
    Temperatura_Vaso float(10),
    Reserva_Agua float(10),
    Data_Minuto datetime,
    Iluminacao float(10)
);
INSERT INTO Informacao (Umidade, Temperatura_Vaso, Reserva_Agua, Data_Minuto, Iluminacao) VALUES
(15, 150,  1200, "2023-12-10 08:20", 100), (5, 125,  1120, "2023-10-12 12:34", 50), (1, 150,  10000, "2023-11-21 23:10", 90),
(50, 10,  4220, "2023-03-01 12:42", 32), (45, 32,  10320, "2023-10-30 15:10", 50);

create table MinhasPlantas(
	ID_Planta integer(5) auto_increment not null primary key,
    Nome_Cientifico varchar(200),
    Data_Nascimento_Planta Date,
    CPF_Usuario varchar(14),
    Nome_Planta varchar(100),
    Cor_Planta varchar(50),
    Florescer_Inicio date,
    Florescer_Fim date,
	CONSTRAINT fk_PlantasOrnamentais FOREIGN KEY (Nome_Cientifico) REFERENCES PlantasOrnamentais (Nome_Cientifico),
    CONSTRAINT fk_Usuario FOREIGN KEY (CPF_Usuario) REFERENCES Usuario (CPF_Usuario)
);

INSERT INTO MinhasPlantas(Nome_Cientifico, Data_Nascimento_PLanta, CPF_Usuario, Nome_Planta, Cor_Planta, Florescer_Inicio, Florescer_Fim) 
VALUES ("Echeveria", "2023-10-10", "555.555.555-55", "Laranjinha", "Laranja", "2023-10-20", "2023-11-13"),
("Echeveria-Lótus", "2023-02-01", "444.444.444-44", "Azulzinho", "Azul", "2023-02-28", "2023-05-12"),
("Rosa Gallica", "2023-11-13", "333.333.333-55", "Amarelinha", "Amarelo", "2024-11-12", "2025-12-13"),
("Tradescantia spathacea", "2019-10-12", "222.222.222-22", "Roxinha", "Roxo", "2023-11-12", "2025-12-13"),
("Anthurium andraeanum", "2012-12-31", "111.111.111-11", "Verdão", "Verde", "2024-11-12", "2025-12-13");	
CREATE TABLE Compra (
	ID_Compra integer(5) primary key not null auto_increment,
    Data_Compra_Inicio datetime,
    Data_Entrega datetime,
    Forma_Pagamento varchar(50),
    CPF_Usuario varchar(14),
    CONSTRAINT fk_Usuario_CPF_Usuario FOREIGN KEY (CPF_Usuario) REFERENCES Usuario (CPF_Usuario)
);

INSERT INTO Compra (Data_Compra_Inicio, Data_Entrega, Forma_Pagamento, CPF_Usuario) VALUES
("2020-02-23 08:30", "2023-03-01 10:00", "Cartão de Crédito", "555.555.555-55"),
("2023-03-30 11:20", "2023-04-23 12:35", "Dinheiro/PIX", "444.444.444-44"),
("2023-09-27 10:16", "2023-10-11 20:45", "Boleto", "333.333.333-55"),
("2023-08-31 09:31", "2023-09-03 15:00", "Cartão de Crédito", "222.222.222-22"),
("2023-07-23 12:42", "2023-08-01 11:23", "Dinheiro/PIX", "111.111.111-11");
 
CREATE TABLE ProdutoVendido(
	ID_ProdutoVendido integer(5) not null auto_increment primary key,
    Quantidade_Produto integer(5),
    Valor_Produto float(10),
    Nome_Produto_Vendido varchar(100),
    Total_Produto_Vendido float(10),
    Cod_Produtos int(5) not null,
    ID_Compra int(5) not null,
	CONSTRAINT fk_Compra_ID_Compra FOREIGN KEY (ID_Compra) REFERENCES Compra (ID_Compra),
    CONSTRAINT fk_Produto_ID_Produtos FOREIGN KEY (Cod_Produtos) REFERENCES Produtos (Cod_Produtos)
);
INSERT INTO ProdutoVendido(Quantidade_Produto, Valor_Produto, Nome_Produto_Vendido, Total_Produto_Vendido, Cod_Produtos, ID_Compra) VALUES 
(2, 50, "Vaso 1", 100, 1, 1), (3, 50, "Vaso 2", 150, 1, 2), (10, 50, "Vaso 3", 500, 1, 3),
(6, 100, "Vaso 4", 112, 4, 4), (1, 500, "Sensores", 1, 5, 5);


CREATE TABLE Valor_Total(
	ID_Valor_Total int(5) not null primary key auto_increment,
    Valor_Total float(10),
	ID_Compra integer(5) not null,
    ID_ProdutoVendido int(5),
    CONSTRAINT fk_Compra_Valor_Total_ID_Compra FOREIGN KEY (ID_Compra) REFERENCES Compra (ID_Compra),
    CONSTRAINT fk_ProdutoVendido_ID_ProdutoVendido FOREIGN KEY (ID_ProdutoVendido) REFERENCES ProdutoVendido (ID_ProdutoVendido)
);
	INSERT INTO Valor_Total (Valor_Total, ID_ProdutoVendido, ID_Compra) VALUES (1000, 1, 1), (1500, 2, 2), (2000, 3, 3), (540.21, 4, 4), (1300, 5, 5);

CREATE Table Interacao(
	ID_Interacao int(5) primary key not null auto_increment,
    CPF_Usuario varchar(14),
    Cod_Bugs int(5),
    CONSTRAINT fk_Usuario_Interacao_CPF_Usuario FOREIGN KEY (CPF_Usuario) REFERENCES Usuario (CPF_Usuario),
    CONSTRAINT fk_Bugs_Cod_Bugs FOREIGN KEY (Cod_Bugs) REFERENCES Bugs (Cod_Bugs)
);

INSERT INTO Interacao (CPF_Usuario, Cod_Bugs) VALUES ("555.555.555-55", 1), ("444.444.444-44", 2), ("333.333.333-55", 3), ("222.222.222-22", 4), ("111.111.111-11", 5);


CREATE TABLE Historico(
	ID_Historico INT(5) AUTO_INCREMENT NOT NULL PRIMARY KEY,
    ID_Planta int(5) not null,
    ID_Irrigacao INT(5) NOT NULL,
    ID_Informacao INT(5) NOT NULL,
    CONSTRAINT fk_Informacoes_ID_Informacoes FOREIGN KEY (ID_Informacao) REFERENCES Informacao (ID_Informacao),
    CONSTRAINT fk_MinhasPlantas_ID_Planta FOREIGN KEY (ID_Planta) REFERENCES MinhasPlantas (ID_Planta),
    CONSTRAINT fk_Irrigacao_ID_Irrigacao FOREIGN KEY (ID_Irrigacao) REFERENCES Irrigacao (ID_Irrigacao)
);
INSERT INTO Historico (ID_Planta, ID_Irrigacao, ID_Informacao) VALUES (1, 1, 1), (2, 2, 2), (3, 3, 3), (4, 4, 4), (5, 5, 5);