#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=1, valor;
    double contador2=0;
    while(contador<=10){
        printf("Type a number \n");
        scanf("%d", &valor);
        contador2 += valor;
        contador += 1;
    }
    printf("The sum of all numbers is: %lf", contador2);
}
