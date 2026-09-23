#include<stdio.h>
int main(){
float s1,s2,s3,s4,s5;
float totall,percentage;
printf("Enter the result of 5 Subject");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
//calculation
totall=s1+s2+s3+s4+s5;
percentage=(totall/500.00)*100;
printf("your totall mark is %f\n",totall);
printf("you got %0.2f%%\n",percentage);
return 0;
}