#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ingresso = 4.5;
    printf("Tabela de valor R$ 5.00: \n");
    printf("Valor: 600.00  | Lucro: 400.00 \n");
    while(ingresso >= 1){
    printf("Tabela de valor %lf: \n", ingresso);
    for(int contador = 26; contador <= 30; contador++){
    printf("Valor: %.2f   | Lucro: %lf \n", ingresso*(contador + 120), (ingresso*(120 + contador))-200);
    }
    ingresso -= 0.5;
    }

}
