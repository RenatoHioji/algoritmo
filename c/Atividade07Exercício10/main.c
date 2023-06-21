#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0, contador2=1;
    double valor, soma, media;
    printf("How many products do you have? \n");
    scanf("%d", &contador);
    while(contador2 <= contador){
        printf("How much does it cost? \n");
        scanf("%lf", &valor);
        soma = soma + valor;
        contador2 +=1;
    }
    media = soma/contador;
    printf("The sum of all of it is: %lf \n", soma);
    printf("The media between of all of it is: %lf \n", media);

}

