#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[11];
    char nome[11], nomepesquisa[10];
    for(int x = 0 ; x <= 10; x++){
        printf("Digite um nome: ");
        scanf("%s", &nome[x]);
        if(x == 9){
            printf("Digite um nome para ser pesquisado \n");
            scanf("%s", &nomepesquisa);
            for(int y = 0; y<= 9; y++)
            {
                if(nome[y] == nomepesquisa[0]){
                    printf("Achei!!!!! \n");
                }
                else{
                    printf("Nao achei :( \n");
                }
            }
        }
    }

}
