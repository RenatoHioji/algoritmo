Algoritmo "Atividade6"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
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
escreval("Você passou e sua média foi de: ", (nota + grade)/2)
senao
Escreval("Você ficou de exame e sua média foi de: ", (nota+grade)/2)
fimse
Fimalgoritmo