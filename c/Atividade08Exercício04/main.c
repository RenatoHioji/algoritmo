#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, inicio, fim;
    printf("Digite um valor \n");
    scanf("%d", &numero);
    printf("Qual e o inicio da tabuada? \n");
    scanf("%d", &inicio);
    printf("Qual e o fim da tabuada? \n");
    scanf("%d",&fim);
    if(inicio >= fim){
        while(inicio >= fim){
        printf("Tabuada %2dx%d: ", numero, inicio);
        printf("%d \n", numero*inicio);
        inicio -= 1;
        }
    }
    else if(fim >= inicio){
            while(fim >= inicio){
            printf("Tabuada %2dx%d: ", numero, fim);
            printf("%d \n", numero * fim);
            fim -= 1;
            }

    }
    else{
        printf("error");
    }



}
