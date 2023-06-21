#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Get in with 2 integer numbers \n");
    printf("Relational operator \n");
    printf("Write the first number \n");
    scanf("%d", &num1);
    printf("Write the second number \n");
    scanf("%d", &num2);
    if(num1 == num2){
        printf("%d is equal to %d \n", num1,num2);
    }
    if(num1 != num2){
        printf("%d is not equal to %d \n", num1, num2);
    }
    if(num1 > num2){
        printf("%d is higher than %d \n", num1, num2);
    }
    if(num1 < num2){
        printf("%d is lower than %d \n", num1, num2);
    }
    if(num1 <= num2){
        printf("%d is lower or equal to %d \n", num1, num2);
    }
    if(num1 >= num2){
        printf("%d is higher or equal to %d \n", num1,num2);
    }
    return 0;
}
