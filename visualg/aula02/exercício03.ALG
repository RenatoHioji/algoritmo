Algoritmo "Exercício 3"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 27/02/2023
Var
 ano: inteiro
 anob: inteiro
 a: inteiro
 dias: inteiro
 idade: inteiro
 age: inteiro
 b: inteiro

Inicio

Escreval("Qual é será sua idade em 2023?")
leia(idade)
ano <- 2023-idade

se ano MOD 4 = 0 entao
   b <- 0
fimse
se ano MOD 4 = 1 entao
   b <- 3
fimse
se ano MOD 4 = 2 entao
   b <-2
fimse
se ano MOD 4 = 3 entao
   b <- 1
fimse

a <- 0
anob <- ano + b

para anob de anob ate 2023 passo 4 faca
a <- a + 1
fimpara


dias <- 365 * idade
age <- dias + a
Escreval("Sua idade em dias é:", age)


Fimalgoritmo