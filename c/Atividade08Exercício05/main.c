#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador = 1, sexo;
    double altura, menor = 999, maior = 0, soma = 0, soma2 = 0, x2 = 0, media = 0, media2 = 0;
    while(contador <= 2){
        printf("Digite a altura \n");
        scanf("%lf", &altura);
        printf("Digite o sexo (Masculino = 1) (Feminino = 2) \n");
        scanf("%d", &sexo);

        if(altura > maior){
        maior = altura;
        }
        else{
            maior = maior;
        }

        if(altura < menor){
            menor = altura;
        }
        else{
            menor = menor;
        }

        if(sexo == 2){
            soma2 = soma2 + altura;
            x2 =  x2 + 1;
        }
        else{
            soma2 = soma2;
        }
        soma = soma + altura;
        contador += 1;

    }
    if(x2 == 0)
    {
        x2 = 1;
    }
    media = soma/2;
    media2 = soma2/x2;

    printf("A maior altura e: %lf \n", maior);
    printf("A menor altura e: %lf \n", menor);
    printf("A media das mulheres e: %lf \n", media2);
    printf("A media da turma e: %lf \n ", media);


}
