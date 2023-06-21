#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, contador = 0, soma = 0;
    while(contador <= 9){
        printf("How old are you? \n");
        scanf("%d", &idade);
        if(idade > 18){
            soma += 1;
        }
        else{

        }
        contador += 1;
    }
    printf("The quantity of legal age people is: %d", soma);
}
