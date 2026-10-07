#include<stdio.h>
int main(){
    int num;
    printf("Enter your number which you want to multiplication table: ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        int sum=num*i;
        printf("%d*%d=%d\n",num,i,sum);
    }

    return 0;
}