#include <stdio.h>
#include <stdlib.h>

int main()
{
  int month;
  printf("Type a number of a month (1-12) \n");
  scanf("%d", &month);
  if(month == 1){
    printf("The month is January! \n");
  }
  else if(month == 2){
    printf("The month is February! \n");
  }
   else if(month == 3){
    printf("The month is March! \n");
  }
   else if(month == 4){
    printf("The month is April! \n");
  }
   else if(month == 5){
    printf("The month is May! \n");
  }
   else if(month == 6){
    printf("The month is June! \n");
  }
   else if(month == 7){
    printf("The month is Jule! \n");
  }
   else if(month == 8){
    printf("The month is August! \n");
  }
   else if(month == 9){
    printf("The month is September! \n");
  }
   else if(month == 10){
    printf("The month is October! \n");
  }
   else if(month == 11){
    printf("The month is November! \n");
  }
   else if(month == 12){
    printf("The month is December! \n");
  }
  else{
    printf("That is not a month's number");
  }
}
