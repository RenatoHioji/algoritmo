Algoritmo "Exercício 06"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2023
Var
// Seção de Declarações das variáveis 
distribuidor: real
impostos: real
fabrica: real
total: real



Inicio
Escreval("Qual é o custo da fábrica?")
leia(fabrica)
distribuidor <- fabrica*(28/27)
impostos <- fabrica*(45/27)
total <- distribuidor + impostos + fabrica
Escreval("O valor total é de: ", total)
Fimalgoritmo








