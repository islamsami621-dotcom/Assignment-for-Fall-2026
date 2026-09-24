#include<stdio.h>
int main(){
    int total_second;
    int hour,minute,second;
    printf("Enter your total seconds ");
    scanf("%d",&total_second);
    //calculation
    hour=total_second/3600;
    minute=(total_second%3600)/60;
    second=total_second%60;
    printf("It is %d hours %d minutes %d seconds",hour,minute,second);
    return 0;
    
}