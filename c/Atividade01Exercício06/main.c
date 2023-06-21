#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fpayment, sells, tsells;
    printf("Type your fix payment \n");
    scanf("%lf", &fpayment);
    printf("Type how much did you sell this month \n");
    scanf("%lf", &sells);
    if(sells > 1500){
        tsells = fpayment + (1500 * 0.3) + ((sells - 1500) * 0.5);
        printf("Your payment check this month will be: %lf", tsells);
    }
    else{
        tsells = fpayment + (1500*0.3);
        printf("Your payment check this month will be: %lf", tsells);
    }

}
