Algoritmo "Atividade5"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/03/2023
Var
morango: real
maca: real
valorpago: real

Inicio
Escreval("Quantos quilogramas de morango foram comprados?")
leia(morango)
Escreval("Quanto quilogramas de maca foram comprados")
leia(maca)

se (morango <= 5)e(maca <=5) entao
valorpago <- (morango * 2.5) + (maca * 2.2)
fimse

se (morango > 5)e(maca <=5) entao
valorpago <- (5 * 2.5) + ((morango-5)*2.5) + (maca * 2.2)
fimse

se (morango <= 5)e(maca >5) entao
valorpago <- (morango *2.5) + (5*2.2) + ((maca - 5) * 2.2)
fimse

se (morango >5) e (maca > 5) entao
valorpago <- (5 * 2.5) + ((morango-5)*2.5) + (5*2.2) + ((maca - 5) * 2.2)
fimse


se (valorpago >25)ou(maca+morango>8) entao
Escreval("O valor a ser pago ser�: ", valorpago*0.9)
senao
Escreval("O valor a ser pago ser�: ", valorpago)
fimse



Fimalgoritmo