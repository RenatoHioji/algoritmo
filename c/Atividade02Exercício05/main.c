#include <stdio.h>
#include <stdlib.h>

int main()
{
    double time, hpayment, tpayment;
    printf("Type how many time did you work this month \n");
    scanf("%lf", &time);
    printf("Type how much do you receive as a payment by hour \n");
    scanf("%lf", &hpayment);
    if(time > 280){
        tpayment = 280 * hpayment + ((time-280) * (hpayment*1.5));
        printf("Your paycheck this month will be: %f", tpayment);
    }
    else{
        tpayment = time * hpayment;
        printf("Your paycheck this month will be: %f", tpayment);
    }


}
