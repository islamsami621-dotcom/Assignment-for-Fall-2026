#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the length and width");
    scanf("%f%f",&length,&width);
    //Calculation
    float area= length*width;
    printf("The area of the rectangle is %0.6f cm square",area);
    return 0;
}