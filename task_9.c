#include<stdio.h>
int main (){
    int a,b,temp;
    printf("Enter the first and second number");
    scanf("%d%d",&a,&b);
    //make swaping formate
    temp=a;
    a=b;
    b=temp;
    printf("The result after swaping are %d and %d",a,b);

    return 0;
}