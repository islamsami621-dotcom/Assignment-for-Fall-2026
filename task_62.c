#include<stdio.h>
int main(){
    int num,reversed=0,reminder,real;
    printf("Enter the number what you want to reverse: ");
    scanf("%d",&num);
    real=num;
    while(num!=0){
        reminder=num%10;
        reversed=reversed*10+reminder;
        num=num/10;
    }
    
    if(real==reversed){
        printf("This is palindrome number.");
    }else{
        printf("This is not palindrome number.");
    }
    return 0;
}