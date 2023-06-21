#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0, contador2=1;
    double nota, nota2, media;
    printf("How many students do your room have? \n");
    scanf("%d", &contador);
    while(contador2 <= contador){
        printf("Type your first grade \n");
        scanf("%lf", &nota);
        printf("Type your second grade \n");
        scanf("%lf", &nota2);
        media = (nota + nota2)/2;
        printf("Your media is: %lf \n", media);
        contador2 +=1;
    }
}
