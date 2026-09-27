#include<stdio.h>
int main(){
    int total_gpa;
    float ssc_gpa,hsc_gpa;
    printf("Enter your ssc and hsc gpa: ");
    scanf("%f %f",&ssc_gpa, &hsc_gpa);
    if((ssc_gpa>=4)&&(hsc_gpa>=4)){
    total_gpa=ssc_gpa+hsc_gpa;
   
    if(total_gpa>=9){
        printf("You are eligible to go next step\n");
    }else{
        printf("You are not eligible for admission\n");
    }
    }else{
        printf("You are not eligible for admission\n");
    }
    return 0;
}