Algoritmo "Atividade3"

Var
salariofixo : real
vendas: real
salariototal : real
Inicio
Escreval("Qual � o seu sal�rio fixo?")
leia(salariofixo)
Escreval("Quanto foram as suas vendas esse m�s?")
leia(vendas)
se vendas <= 1500 entao
salariototal <- salariofixo + (vendas*0.03)
fimse
se vendas > 1500 entao
salariototal <- salariofixo + (1500 * 0.03) + ((vendas-1500)* 0.05)
fimse
Escreval("Seu sal�rio total ser� de: ", salariototal)


Fimalgoritmo