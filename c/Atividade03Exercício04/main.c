#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salariomin, mensal;
    printf("How much is the base salary right now? \n");
    scanf("%lf", &salariomin);
    printf("How much is your salary? \n");
    scanf("%lf", &mensal);
    printf("You receive %lf times the base salary.", (mensal/salariomin));
}
