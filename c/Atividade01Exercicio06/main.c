#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fabrica;
    printf("Write how much the fabric waste with the car\n");
    scanf("%f", &fabrica);
    printf("The total value of the car is: %f", fabrica*73/100 + fabrica);
}
