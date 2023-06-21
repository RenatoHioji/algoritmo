#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, idade, soma = 0, x2=0;
    double media = 0, y1 = 0, y2 = 0 , y3 = 0, y4 = 0,y5 = 0, z1, z2, z3, z4, z5;
    printf("De quantas pessoas voce gostaria de indicar a idade? \n");
    scanf("%d", &x);
    for (int contador = 1; contador <= x; contador++)
    {
        printf("Digite a idade \n");
        scanf("%d", &idade);
        if(idade > 18)
        {
            soma = soma + idade;
            x2 = x2 + 1;
        }
        else{
            soma = soma;
        }

        if(idade >= 0 && idade <= 17){
        y1 = y1 + 1;
        }
        else if(idade >= 18 && idade <= 35)
        {
            y2 = y2 + 1;
        }
        else if(idade > 35 && idade <= 50){
            y3 = y3 + 1;
        }
        else if(idade > 50 && idade <= 65){
            y4 = y4 + 1;
        }
        else if(idade > 65){
            y5 = y5 + 1;
        }
        else{
            printf("Idade invalida \n");
        }
    }
    if(x2 == 0)
    {
        x2 = 1;
    }
    printf("A soma total das idades das pessoas maiores de idade e: %d \n", soma);
    media = soma/x2;
    z1 = y1/x;
    z2 = y2/x;
    z3 = y3/x;
    z4 = y4/x;
    z5 = y5/x;
    printf("A media das soma e de: %lf \n", media);
    printf("A porcentagem sera organizada da seguinte forma: (0-17) %.5f  (18-35) %.4f (36-50) %.3f (51-65) %.2f (>65) %lf", z1, z2, z3, z4, z5);
}
