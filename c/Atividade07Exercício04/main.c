#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=1, valor, contador2=0;
    while(contador<=10){
        printf("Type a number \n");
        scanf("%d", &valor);
        if(valor >= 10 && valor <=20)
        {
            contador2 += 1;
            contador += 1;
        }
        else{
            contador += 1;
        }
    }
    printf("The quantity of numbers between 10 and 20 is: %d", contador2);
}
