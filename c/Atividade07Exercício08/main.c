#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=1, valor;
    double contador2=0;
    while(contador<=10){
    printf("Type a number \n");
    scanf("%d", &valor);
    if(valor < 40){
            contador2 += valor;
            contador += 1;
    }
        else{
        contador += 1;
        }

    }
    printf("The sum between all numbers under 40 is: %lf", contador2);
}
