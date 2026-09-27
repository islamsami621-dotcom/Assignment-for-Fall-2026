#include<stdio.h>
int main(){
    double salary, tax;
    printf("Enter your salary ");
    scanf("%lf",&salary);
    if(salary<=0){
        printf("Invild Input\n");
    }else if(salary<=1000){
        tax=salary*0,1;
    }else if(salary<=20000){
        tax=salary*0.2;
    }else if(salary>20000){
        tax=salary*0.25;
    }
    printf(" Your net salary is %0.4lf currency",salary-tax);
    return 0;
}