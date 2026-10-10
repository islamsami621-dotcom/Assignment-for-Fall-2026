#include<stdio.h>
int main(){
    int num,reversed=0,reminder;
    printf("Enter the number what you want to reverse: ");
    scanf("%d",&num);
    while(num!=0){
        reminder=num%10;
        reversed=reversed*10+reminder;
        num=num/10;
    }
    printf("The reversed number is %d",reversed);
    return 0;
}