Algoritmo "Decision"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
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
Escreval("Qual � a sua frequ�ncia")
leia(frequencia)
se (nota >= 6) e (frequencia > 75) entao
escreval("Voc� passou.")
senao
Escreval("Voc� ficou de exame.")
fimse

Escreval("Digite sua idade: ")
leia(idade)
Escreval("Voc� entregou sua declara��o? S/N")
leia(declaracao)
se (idade>=18)ou(declaracao="S")entao
Escreval("Sua viagem ser� dia 18/03")
senao
Escreval("Desculpe voc� n�o ir� viajar")
fimse
Fimalgoritmo