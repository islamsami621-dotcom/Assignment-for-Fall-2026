#include<stdio.h>
int main(){
    int num;
    printf("Enter the numbers student got ");
    scanf("%d",&num);
    if(num>=40){printf("The student passed");}
    else{printf("The student failed");}
    return 0;
}