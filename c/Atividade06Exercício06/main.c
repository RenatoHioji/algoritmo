#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1, soma = 0, n;
    while(contador <= 10){
        printf("Write a number \n");
        scanf("%d", &n);

        soma += n;

        contador += 1;
    }
    printf("The sum value is: %d", soma);
}
