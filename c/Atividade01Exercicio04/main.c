#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary, reajuste;
    printf("Write your salary \n");
    scanf("%f", &salary);
    printf("Write your percent of adjustment \n");
    scanf("%f", &reajuste);
    printf("Your new salary is: %f", salary*reajuste/100 + salary );
}

