#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the length and width");
    scanf("%f%f",&length,&width);
    //Calculation
    float perimeter = 2*(length+width);
    printf("The perimeter of the rectangle is %0.6f cm square",perimeter);
    return 0;
}