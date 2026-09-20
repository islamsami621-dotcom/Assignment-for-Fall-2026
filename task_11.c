#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter your first, second, third number");
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    int avg=sum/3;
    printf("Average %d",avg);
    return 0;
}