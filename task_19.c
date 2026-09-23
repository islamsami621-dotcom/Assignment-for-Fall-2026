#include<stdio.h>
int main(){
    float p,r,n;
    printf("Enter the principal,rate and time");
    scanf("%f%f%f",&p,&r,&n);
    //Calculation
    float i;
    i=(p*r*n)/100;
    printf("The intrest will be %0.6f currency",i);
    return 0;
}