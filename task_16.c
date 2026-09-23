#include<stdio.h>
int main (){
    float base,hight;
    printf("Enter the value of Base and hight of the tringle");
    scanf("%f%f",&base,&hight);
    float area;
    area=0.5*base*hight;
    printf("The area of the tringle is %0.6f cm square",area);
    return 0;
}