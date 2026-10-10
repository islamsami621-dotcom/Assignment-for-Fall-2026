#include<stdio.h>
int main(){
    int num,reminder,sum=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num<0){
        num=-num;
    }
    while(num>0){
        reminder=num%10;
        sum=sum+reminder;
        num=num/10;
    }
    printf("Your sum is %d",sum);
    return 0;
    
}