#include<stdio.h>
int main(){
    int num,reminder,product=1;
    printf("Enter your numbers: ");
    scanf("%d",&num);
    if (num==0){
        product=0;
    }
    while(num>0){
        reminder=num%10;
        product=product*reminder;
        num=num/10;
    }
    printf("Your product is %d",product);
    return 0;

}