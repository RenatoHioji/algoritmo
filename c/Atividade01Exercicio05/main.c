#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    printf("Write your first grade!\n");
    scanf("%f", &nota1);
    printf("Write your second grand! \n");
    scanf("%f", &nota2);
    printf("Write your third grade! \n");
    scanf("%f", &nota3);

    printf("Your final grade is: %f", ((nota1*2) + (nota2*3) + (nota3*5))/10);
}
