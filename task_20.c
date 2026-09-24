#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,intrest,amount;
    printf("Enter your principal rate and time");
    scanf("%f%f%f",&principal,&rate,&time);
    //calculation
    amount=principal*pow((1+rate/100),time);
    intrest=amount-principal;
    printf("you will get %0.2f taka as intrest",intrest);

    return 0;
}