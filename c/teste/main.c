#include <stdio.h>
#include <stdlib.h>

int main()
{
    double alt1, alt2, alt3;
    printf("What is the height of ther first person? \n");
    scanf("%lf", &alt1);
    printf("And what about the second one? \n");
    scanf("%lf", &alt2);
    printf("Then, the last one is? \n");
    scanf("%lf", &alt3);
    if(alt1 == alt3 && alt3 != alt2){
        if(alt1>alt2){
            printf("The higher is %3.f and %2.f then %f", alt1, alt3, alt2);
        }
        else if(alt1 < alt2){
            printf("The higher is %3.f and %2.f then %f", alt2, alt1, alt3 );
        }
    }
}
