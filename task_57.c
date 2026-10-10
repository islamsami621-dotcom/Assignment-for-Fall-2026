#include<stdio.h>
int main(){
    int num;
    printf("Enter your number which you want to factorial: ");
    scanf("%d",&num);
    int fact=num;
    for(int i=1;i<num;i++){
        fact = fact*i;
    }
    printf("Your result is %d",fact);
    return 0;
}