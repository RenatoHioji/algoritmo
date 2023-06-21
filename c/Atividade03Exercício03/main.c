#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    double vendas, total;
    int imoveis;
    printf("What is your name? \n");
    scanf("%s", &nome);
    printf("How many immobile did you sell? \n");
    scanf("%d", &imoveis);
    printf("How much did you sell this entire month? \n");
    scanf("%lf", &vendas);
    total = (1500) + (200*imoveis);
    printf("%s Your total salary is %lf", nome, total+0.05*vendas);


}
