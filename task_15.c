#include<stdio.h>
int main (){
    float r;
    printf("Enter the value of redius of the circle");
    scanf("%f",&r);
    float area;
    area=3.1416*(r*r);
    printf("The area of the circle is %0.6f cm square",area);
    return 0;
}