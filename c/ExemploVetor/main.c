#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[3], numero;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero);
    vetor[0] = numero;
    printf("Digite o segundo numero: ");
    scanf("%d", &numero);
    vetor[1] = numero;
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero);
    vetor[2] = numero;
    printf("Digite o quarto numero: ");
    scanf("%d", &numero);
    vetor[3] = numero;
    printf("Mostre o vetor = %d \n", vetor[0]);
    printf("Mostre o vetor = %d \n", vetor[1]);
    printf("Mostre o vetor = %d \n", vetor[2]);
    printf("Mostre o vetor = %d \n", vetor[3]);
}
