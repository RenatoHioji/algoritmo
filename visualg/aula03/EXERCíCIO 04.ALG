Algoritmo "Exerc�cio 04"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 02/03/2023
Var
salario : real
reajuste : real

Inicio
Escreval("Digite seu sal�rio")
leia(salario)
Escreval("Qual � o percentual de reajuste do seu sal�rio?")
leia(reajuste)

Escreval("O seu novo sal�rio ser� de: " , salario + (reajuste/100 * salario))
Fimalgoritmo