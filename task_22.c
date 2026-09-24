#include<stdio.h>
int main(){
    int total_day;
    float year,month,day;
    printf("Enter your total day  ");
    scanf("%d",&total_day);
    //calculation
    year=total_day/365.0f;
    month=(total_day%365)/30.0f;
    day=total_day%30;
    printf("It is %f year %f month %f day ",year,month,day);
    return 0;
    
}