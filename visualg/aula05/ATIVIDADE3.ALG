Algoritmo "Atividade3"

Var
salariofixo : real
vendas: real
salariototal : real
Inicio
Escreval("Qual é o seu salário fixo?")
leia(salariofixo)
Escreval("Quanto foram as suas vendas esse mês?")
leia(vendas)
se vendas <= 1500 entao
salariototal <- salariofixo + (vendas*0.03)
fimse
se vendas > 1500 entao
salariototal <- salariofixo + (1500 * 0.03) + ((vendas-1500)* 0.05)
fimse
Escreval("Seu salário total será de: ", salariototal)


Fimalgoritmo