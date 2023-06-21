#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1;
    double n;
    while(contador <= 10){
            printf("Write a number \n");
            scanf("%lf", &n);
            printf("The half of the number is: %lf \n", n/2);
        contador += 1;
    }
}
