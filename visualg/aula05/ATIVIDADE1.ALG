Algoritmo "Atividade1"
Var
salariototal : real
salariohora : real
horas: real


Inicio
Escreval("Quantas horas voc� trabalho esse m�s?")
leia(horas)
Escreval("Qual � o seu sal�rio por hora?")
leia(salariohora)

se horas <= 160 entao
salariototal <- horas * salariohora
fimse
se horas > 160 entao
salariototal <- (salariohora*160) + ((horas - 160)*(salariohora*1.5))
fimse
Escreval("Seu sal�rio final ser� de: ", salariototal)
Fimalgoritmo