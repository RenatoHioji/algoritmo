Algoritmo "Atividade2"

Var

nome: caracter
altura: real
sexo: caracter
peso: real

Inicio
Escreval("Qual � o seu nome?")
leia(nome)
Escreval("Qual � a sua altura?")
leia(altura)
Escreval("Qual � o seu sexo? M ou F")
leia(sexo)

se sexo = "M" entao
peso <- (72.7*altura)-58
fimse
se sexo = "F" entao
peso <- (62.1*altura)-44.7
fimse
Escreval(nome, " seu peso ideal � de: ", peso)
Fimalgoritmo