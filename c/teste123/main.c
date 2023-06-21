int main()
{
    double esta_1,esta_2,esta_3;
    printf("Digite a primeira estatura: \n");
    scanf("%lf",&esta_1);
    printf("Digite a segunda estatura: \n");
    scanf("%lf",&esta_2);
    printf("Digite a terceira estatura: \n");
    scanf("%lf",&esta_3);

     if(esta_3 > esta_1){
        if(esta_1 > esta_2){
            printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_3,esta_1,esta_2);
        }
        else if(esta_2 > esta_1 && esta_3 > esta_2){
            printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_3,esta_2,esta_1);
        }
      }
    else if(esta_1 > esta_2){
     if(esta_2 > esta_3){
        printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_1,esta_2,esta_3);
     }
     else if(esta_1 > esta_3 && esta_2 < esta_3){
        printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_1,esta_3,esta_2);
     }
    }

     else if(esta_2 > esta_1){
        if(esta_1 > esta_3){
          printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_2,esta_1,esta_3);
        }
        else if(esta_1 < esta_3 && esta_3 < esta_2){
           printf("A ordem das estaturas sera a seguinte: %.2f \n %.2f \n %.2f",esta_2,esta_3,esta_1);
        }
     }

}
