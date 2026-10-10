#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i=i+1){
        if(num%i==0){
            count=count+1;
        }
    }
    if(count==2){
        printf("This is prime number.");
    }else{
        printf("This is not prime number.");
    }
    return 0;
}