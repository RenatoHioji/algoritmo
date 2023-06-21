#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, numero, soma;
    contador = 1;
    soma = 0;
    while(contador <=5){
        printf("Digite o valor do numero \n");
        scanf("%d", &numero);
        soma += numero;
        contador += 1;
        printf("A soma atual e de: %d \n", soma);
    }
    printf("%d", soma);
}
