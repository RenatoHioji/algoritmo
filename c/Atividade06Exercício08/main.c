#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int idade, contador = 0;
    char sexo[5], nome[50];
    while(contador <= 2){
        printf("What is your name? \n");
        scanf("%s", &nome);
        printf("How old are you? \n");
        scanf("%d", &idade);
        printf("What is your gender? M or F \n");
        scanf("%s", &sexo);
        if(idade > 21){
                if(strcmp(sexo, "M")==0 || strcmp(sexo, "m")== 0){
                printf("%s \n",nome);
                    contador += 1;
                }
                else{
                    contador += 1;
                }
        }
        else{
            contador += 1;
        }
    }

}
