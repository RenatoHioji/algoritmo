#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=15;
    int sum = 0;
    while(contador>= 15 && contador <= 100){
        sum = sum + contador;
        contador  += 1;
    }
    printf("The sum of the numbers between 15 and 100 is: %d", sum/85);
}
