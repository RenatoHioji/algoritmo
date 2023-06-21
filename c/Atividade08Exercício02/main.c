#include <stdio.h>
#include <stdlib.h>

int main()
{
    char funcao[5], contador[5] = "Sim";
    double result = 0, n1, n2;
    while(strcmp(contador, "Sim") == 0){
    if(result == 0){
    printf("Qual tipo de operacao sera realizada? \n Soma (s) \n Subtracao (z) \n Multiplicacao (m) \n Divisao (d) \n");
    scanf("%s",&funcao);
    printf("Digite o primeiro numero \n");
    scanf("%lf", &n1);
    printf("Digite o segundo numero \n");
    scanf("%lf", &n2);
    if(strcmp(funcao, "s") == 0){
    printf("A soma dos numeros e: %lf \n", n1 + n2);
    result = n1+n2;
    }
    else if(strcmp(funcao, "z") == 0){
    printf("A subtracao dos numeros e: %lf \n", n1 - n2);
    result = n1-n2;
    }
    else if(strcmp(funcao, "m") == 0){
    printf("A multiplicacao dos numeros e: %lf \n", n1 * n2);
    result = n1*n2;
    }
    else if(strcmp(funcao, "d") == 0){
    printf("A divisao dos numeros e: %lf \n", n1/n2);
    result = n1/n2;
    }
    else{
        printf("Error \n");
        result = 0;
    }
    }

    else if(result != 0){
    printf("Qual tipo de operacao sera realizada? \n Soma (s) \n Subtracao (z) \n Multiplicacao (m) \n Divisao (d) \n");
    scanf("%s",&funcao);
    printf("Digite um numero \n");
    scanf("%lf", &n1);
    if(strcmp(funcao, "s") == 0){
    result = (result) + n1;
    printf("A soma dos numeros e: %lf \n", result);
    }
    else if(strcmp(funcao, "z") == 0){
    result = result - n1;
    printf("A subtracao dos numeros e: %lf \n", result);
    }
    else if(strcmp(funcao, "m") == 0){
    result = (result) * n1;
    printf("A multiplicacao dos numeros e: %lf \n", result);
    }
    else if(strcmp(funcao, "d") == 0){
    result = (result)/n1;
    printf("A divisao dos numeros e: %lf \n", result );
    }
    else{
        printf("Error \n");
        result = 0;
    }
    }

    printf("Voce quer continuar?  Sim ou Nao \n");
    scanf("%s", &contador);
    }




}
