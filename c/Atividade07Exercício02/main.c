#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador =1, numero, media;
    printf("Write a number \n");
    scanf("%d", &numero);

    if(numero >= 1 && numero <= 10){
        while(contador <= 10){
        media = contador*numero;
        printf("O numero e: %d \n", media);
        contador += 1;
        }
    }

    else{
        contador += 1;
    }

}
