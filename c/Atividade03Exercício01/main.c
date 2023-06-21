#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, produto, soma;
    printf("Write a number \n");
    scanf("%lf", &n1);
    printf("Write another number \n");
    scanf("%lf",  &n2);
    soma = n1 + n2;
    produto = n1*n2;
    printf("The product of the number is %2.f and the addition is %lf ", produto, soma);
}
