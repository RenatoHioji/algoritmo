Algoritmo "Decision"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/03/2023
Var
nota: real
frequencia : real
idade : inteiro
declaracao: caracter

Inicio
Escreval("Digite sua nota.")
leia(nota)
Escreval("Qual é a sua frequência")
leia(frequencia)
se (nota >= 6) e (frequencia > 75) entao
escreval("Você passou.")
senao
Escreval("Você ficou de exame.")
fimse

Escreval("Digite sua idade: ")
leia(idade)
Escreval("Você entregou sua declaração? S/N")
leia(declaracao)
se (idade>=18)ou(declaracao="S")entao
Escreval("Sua viagem será dia 18/03")
senao
Escreval("Desculpe você não irá viajar")
fimse
Fimalgoritmo