#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vel;
    printf("Write a velocity in km/h \n");
    scanf("%lf", &vel);
    printf("The velocity in meters per second is: %lf", vel*3.6 );
}
