#include <stdio.h>
#include <stdlib.h>

int main()
{
      double qstock, smax, smin, smedia;
    printf("What is the quantity in stock right now? \n");
    scanf("%lf", &qstock);
    printf("What is the max quantity that can be fit in the stock?");
    scanf("%lf", &smax);
    printf("What is the minimum quantity that can be in stock?");
    scanf("%lf", &smin);
    smedia = (smin + smax)/2;
    if(qstock >= smedia){
        printf("Don't buy it!");
    }
    else if(qstock < smedia){
        printf("Buy it!");
}
}
