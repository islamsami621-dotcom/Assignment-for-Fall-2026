#include<stdio.h>
int main(){
    int month;
    int year;
    printf("Enter the serial of month: ");
    scanf("%d",&month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("This month has 31 days");
        break;
        case 4:
        case 6:
        case 9:
        printf("This month has 30 days");
        break;
        case 2:
        printf("Enter the year: ");
        scanf("%d",&year);
        if((year%4==0 && year&100!=0)||(year%400==0)){
            printf("The month has 29 days");
        }else{
            printf("The month has 28 days");
        }
        break;
        default:
        printf("Invalid input");
    }
    return 0;
        

    
}