#include<stdio.h>
int main(){
    float num;
    printf("Enter the number");
    scanf("%f",&num);
    if(num<0){printf("The number %f is negetive",num);}
    else if(num>0){printf("The number %f is positive",num);}
    else{printf("The number is zero");}
    return 0;
}