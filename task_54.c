#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the final number you want to addition: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("Your sum is %d",sum);
    return 0;
}