Algoritmo "Atividade4"

Var
estoqueatual : real
maximo: real
minima: real
media: real


Inicio
Escreval("Qual � o estoque atual?")
leia(estoqueatual)
Escreval("Qual � o m�ximo do estoque?")
leia(maximo)
Escreval("Qual � o m�nimo do estoque?")
leia(minima)

media <-(minima+maximo)/2

se estoqueatual >= media entao
Escreval("N�o efetuar compra")
fimse
se estoqueatual < media entao
Escreval("Efetuar compra")
fimse
Fimalgoritmo