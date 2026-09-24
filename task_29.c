#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the numbers ");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){printf("The number %d is greater",num2);}
    else{printf("The number %d is greater",num1);}
    return 0;
}