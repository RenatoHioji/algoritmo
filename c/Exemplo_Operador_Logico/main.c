#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media_final;
    int frequencia;
    printf("Type your first grade \n");
    scanf("%lf", &nota1);
    printf("Type your second grade \n");
    scanf("%lf", &nota2);
    printf("Write your frequency \n");
    scanf("%d", &frequencia);
    media_final = (nota1 + nota2)/2;
    if(media_final >= 6 && frequencia >= 75){
        printf("Congratulations!, you were approved with %.2f e com and the frequency of %d", media_final, frequencia);
    }
    else{
        printf("It's needed to do the exam.");
    }
}
