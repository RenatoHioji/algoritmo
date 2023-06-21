#include <stdio.h>
#include <stdlib.h>

int main()
{
    double camisas;
    printf("How many t-shirts is being sold? \n");
    scanf("%lf", &camisas);
    if(camisas > 0 && camisas <= 5){
        printf("You're going to pay %lf", camisas * 12.50-(camisas*0.03 * 12.50));
    }
    else if(camisas >5 && camisas <=10){
        printf("You're going to pay %lf", camisas * 12.50-(camisas*0.05 * 12.50));
    }
    else if(camisas > 10){
        printf("You're going to pay %lf", camisas * 12.50-(camisas*0.07 * 12.50));
    }
    else{
        printf("Insert a valid number");
    }

}
