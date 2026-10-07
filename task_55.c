#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the final number you want to addition(ONLY EVEN): ");
    scanf("%d",&num);
    for(int i=2;i<=num;i=i+2){//i=i+2
        sum=sum+i;
    }
    printf("Your sum is %d",sum);
    return 0;
}