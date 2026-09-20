#include<stdio.h>
int main (){
    int a,b;
    printf("Enter the first and second number");
    scanf("%d%d",&a,&b);
    //swaping formate
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap result are %d and %d",a,b);
    return 0;
}