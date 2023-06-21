#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabuada[3], multiplicador[10];
    for(int z = 0; z<=9; z++){
        multiplicador[z] = z+1;
    }
    for(int k = 0; k<=2; k++){
        tabuada[k] = k+1;
    }


    for(int y = 0; y<=2; y++){
        for(int x = 0; x<=9; x++){
            printf("Valor %d x %d : %d \n \n",tabuada[y], multiplicador[x], tabuada[y]*multiplicador[x]);
        }

    }

}
