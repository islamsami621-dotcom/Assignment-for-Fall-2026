#include<stdio.h>
int main(){
    int num,sum=0,factorial=1;
    printf("Enter your number : ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        sum=num-1;
        factorial=sum*factorial;
    }
    printf("Your factorial number is %d",factorial);
    return 0;
}