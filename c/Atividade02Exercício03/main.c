#include <stdio.h>
#include <stdlib.h>

int main()
{
    int napple;
    double tapple;
    printf("Type the quantity of apples bought \n");
    scanf("%d", &napple);
    if(napple >= 12){
        tapple = napple * 1;
        printf("The total value is: %f", tapple);
    }
    else{
        tapple = napple * 1.30;
        printf("The total value is: %f", tapple);
    }
}
