Algoritmo "Exerc�cio 07"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2023
Var
salario_fixo: real
comissao_percentual: real
salario_total: real
vendas: real


Inicio
Escreval("Qual � o seu sal�rio fixo?")
leia(salario_fixo)
Escreval("Qual � a sua comiss�o percentual sob a venda?")
leia(comissao_percentual)
Escreval("Qual foi valor total das vendas?")
leia(vendas)

salario_total <- salario_fixo + (5/100*vendas) + (comissao_percentual/100*vendas)

Escreval("Seu sal�rio total � de: ", salario_total)

Fimalgoritmo





