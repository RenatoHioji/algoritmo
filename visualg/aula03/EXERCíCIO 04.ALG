Algoritmo "Exercício 04"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2023
Var
salario : real
reajuste : real

Inicio
Escreval("Digite seu salário")
leia(salario)
Escreval("Qual é o percentual de reajuste do seu salário?")
leia(reajuste)

Escreval("O seu novo salário será de: " , salario + (reajuste/100 * salario))
Fimalgoritmo