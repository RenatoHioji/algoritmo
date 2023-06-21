#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[4];
    for(int i = 0; i<=4;i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(int i = 4; i>=0; i--){
    printf("%d \n", vetor[i]);
    }


}
