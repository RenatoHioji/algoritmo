#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador2=1, codigo;
    double valor, soma, maior;
    while(contador2 <= 15){
        printf("How much does it cost? \n");
        scanf("%lf", &valor);
        printf("What is its code? \n");
        scanf("%d", &codigo);
        soma = soma + valor;
        if(valor > maior){
            maior = valor;
            contador2 +=1;
        }
        else{
            contador2 +=1;
        }
    }
    printf("The media of all of it is: %lf \n", soma/15);
    printf("The higher value is: %lf", maior);

}

