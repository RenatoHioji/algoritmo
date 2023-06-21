#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limite, contador = 1;
    printf("Write a number \n");
    scanf("%d", &limite);
    if(contador > limite){
        while(contador >= limite){
            printf("%d \n", limite);
            limite += 1;
        }
    }
    else if(contador < limite){
        while(contador <= limite){
            printf("%d \n", contador);
            contador += 1;
        }
    }
    else if(contador == limite){
        printf("%d", contador);
    }
    else{
        printf("Error");
    }
}

