Algoritmo "Exercício 07"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2023
Var
salario_fixo: real
comissao_percentual: real
salario_total: real
vendas: real


Inicio
Escreval("Qual é o seu salário fixo?")
leia(salario_fixo)
Escreval("Qual é a sua comissão percentual sob a venda?")
leia(comissao_percentual)
Escreval("Qual foi valor total das vendas?")
leia(vendas)

salario_total <- salario_fixo + (5/100*vendas) + (comissao_percentual/100*vendas)

Escreval("Seu salário total é de: ", salario_total)

Fimalgoritmo





