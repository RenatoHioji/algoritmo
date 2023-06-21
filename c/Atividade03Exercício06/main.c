#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2;
    int opcao;
    printf("Write a number \n");
    scanf("%lf", &n1);
    printf("Write another number \n");
    scanf("%lf", &n2);
    printf("Select an action \n 1. Calculate media with weight 3 and 2, respectively \n 2. Calculate the square of the addition \n 3. Calculate the third elevation of the lower number. \n");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Your media is: %lf", ((n1*3)+(n2*2))/5);
    }
    else if(opcao == 2){
        printf("Your result is %lf", pow((n1+n2), 2));
    }
    else if(opcao == 3){
        if(n1 > n2){
            printf("The third elevation for the lower number is %lf", pow(n2, 3));
        }
        else if(n1 < n2){
            printf("The third elevation for the lower number is %lf", pow(n1, 3));
        }
        else{
            printf("The third elevation for the lower number is %lf", pow(n1,3));
        }
    }
    else{
        printf("Invalid option");
    }
}
