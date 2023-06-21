Algoritmo "Atividade1"
Var
salariototal : real
salariohora : real
horas: real


Inicio
Escreval("Quantas horas você trabalho esse mês?")
leia(horas)
Escreval("Qual é o seu salário por hora?")
leia(salariohora)

se horas <= 160 entao
salariototal <- horas * salariohora
fimse
se horas > 160 entao
salariototal <- (salariohora*160) + ((horas - 160)*(salariohora*1.5))
fimse
Escreval("Seu salário final será de: ", salariototal)
Fimalgoritmo