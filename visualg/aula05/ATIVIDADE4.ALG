Algoritmo "Atividade4"

Var
estoqueatual : real
maximo: real
minima: real
media: real


Inicio
Escreval("Qual é o estoque atual?")
leia(estoqueatual)
Escreval("Qual é o máximo do estoque?")
leia(maximo)
Escreval("Qual é o mínimo do estoque?")
leia(minima)

media <-(minima+maximo)/2

se estoqueatual >= media entao
Escreval("Não efetuar compra")
fimse
se estoqueatual < media entao
Escreval("Efetuar compra")
fimse
Fimalgoritmo