#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sal, vendas;
    printf("Write your salary \n");
    scanf("%lf", &sal);
    printf("How much did you sell this month \n");
    scanf("%lf", &vendas);
    if(vendas <= 1500 && vendas > 0){
        printf("Your total salary is: %lf", vendas*0.03 + sal);
    }
    else if(vendas > 1500){
        printf("Your total salary is: %lf", vendas*0.05 + sal);
    }
    else{
        printf("Error");
    }
}
