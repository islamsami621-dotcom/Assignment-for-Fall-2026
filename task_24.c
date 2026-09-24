#include<stdio.h>
int main(){
    float unit;
    float bill,total_bill,supercharge;
    printf("Enter how much unit you have consumed ");
    scanf("%f",&unit);
    if(unit<=50){
        bill=unit*0.5;
    }else if(unit<=150){
        bill=50*0.5+(unit-50)*0.75;
    }else if(unit<=250){
        bill=50*0.5+100*0.75+(unit-150)*1.25;
    }else{
        bill=50*0.5+100*0.75+100*1.25+(unit-250)*1.5;
    }
    supercharge=bill*0.20;
    total_bill=supercharge+bill;
    printf("your totall bill is %0.2f taka",total_bill);
    return 0;
}