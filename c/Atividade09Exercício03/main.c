#include <stdio.h>
#include <stdlib.h>

int main()
{
    double aluno[2], aluno2[2], aluno3[2];
    double soma, soma2, soma3, media, media2, media3;
    for(int x = 0 ; x<=2; x++){
        printf("Digite uma nota \n");
        scanf("%lf", &aluno[x]);
        soma = soma + aluno[x];
    }
    for(int z = 0; z<=2; z++){
        printf("Digite uma nota \n");
        scanf("%lf", &aluno2[z]);
        soma2 = soma2 + aluno2[z];
    }
    for(int k = 0; k<=2; k++){
        printf("Digite uma nota \n");
        scanf("%lf", &aluno3[k]);
        soma3 = soma3 + aluno3[k];
    }
    media = soma/3;
    media2 = soma2/3;
    media3 = soma3/3;

    if(media > media2){
        if(media2 > media3){
        printf("Ranking: %lf | %.2f  | %.2f", media, media2, media3);
        }

        if(media2 < media3 && media > media3){
            printf("Ranking: %lf | %.2f  | %.2f", media, media3, media2);
        }
        else if(media < media3){
                printf("Ranking: %lf | %.2f  | %.2f", media3, media, media2);
            }
    }

    else if(media2>media){
        if(media> media3){
        printf("Ranking: %lf | %.2f  | %.2f", media2, media, media3);
        }
        else if(media < media3 && media2 > media3){
            printf("Ranking: %lf | %.2f  | %.2f", media2, media3, media);
        }
        else if(media2 < media3){
            printf("Ranking: %lf | %.2f  | %.2f", media3, media2, media);
        }
    }
    else if(media3 >media){
        if(media > media2){
        printf("Ranking: %lf | %.2f  | %.2f", media3, media, media2);
        }
        else if(media < media2 && media3 >media2){
            printf("Ranking: %lf | %.2f  | %.2f", media3, media2, media);
        }
        else if(media2 > media3){
            printf("Ranking: %lf | %.2f  | %.2f", media2, media3, media);
        }

    }






}
