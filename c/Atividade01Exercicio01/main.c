#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    printf("Write a number\n");
    scanf("%d", &numero1);
    printf("Write another number\n");
    scanf("%d", &numero2);
    printf("The digited numbers are: %2.d e %2.d", numero1, numero2);
}
