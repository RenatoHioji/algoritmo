Algoritmo "Atividade6"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/03/2023
Var
nota: real
grade: real

Inicio
Escreval("Digite sua primeira nota: ")
leia(nota)
Escreval("Digite sua outra nota: ")
leia(grade)
se (nota + grade)/2 > 6 entao
escreval("Voc� passou e sua m�dia foi de: ", (nota + grade)/2)
senao
Escreval("Voc� ficou de exame e sua m�dia foi de: ", (nota+grade)/2)
fimse
Fimalgoritmo