#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Write a number \n");
    scanf("%d", &number);
    if(number > 10)
    {
        printf("It bigger than 10");
    }
    else{
        printf("Its lower or equal to 10");
    }
}
