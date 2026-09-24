#include<stdio.h>
int main(){
    float basic,hra,da,ma,gross_salary;
    printf("Enter your basic salary ");
    scanf("%f",&basic);
    //calculation
    if(basic<=10000){
        hra=basic*0.30;
        da=basic*0.70;
        ma=basic*0.05;
    }else if(basic<=25000){
         hra=basic*0.40;
         da=basic*0.80;
         ma=basic*0.1;
    }else{
         hra=basic*0.50;
         da=basic*0.90;
         ma=basic*0.15;
    }
    gross_salary=basic+hra+ma+da;
    printf("Your basic salary %0.1f taka\n",basic);
    printf("Your house rent allowance %0.1f taka\n",hra);
    printf("Your medical allowance %0.1f taka\n",ma);
    printf("Your dareness allowance %0.1f taka\n",da);
    printf("you will get totall %0.2f taka\n",gross_salary);
    return 0;
}