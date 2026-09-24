#include<stdio.h>
int main(){
    int num;
    printf("Enter the number ");
    scanf("%d",&num);
    if(num%5==0){printf("The number %d is divisible",num);}
    else{printf("The number %d is not divisible",num);}
    return 0;
}