#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the numbers ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if((num1>=num2)&&(num1>=num3)){
        printf("The number %d is largest mumber",num1);
    }else if((num2>=num1)&&(num2>=num3)){
        printf("The number %d is largest number",num2);
    }else{
        printf("The number %d is largest number",num3);
    }
    return 0;
}