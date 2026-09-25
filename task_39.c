#include<stdio.h>
int main(){
    int num;
    printf("Enter the number student got in exam ");
    scanf("%d",&num);
    
        if (num >= 90) {
            printf("A+\n");
        } 
        else if (num >= 79) {
            printf("A\n");
        } 
        else if (num >= 69) {
            printf("B\n");
        } 
        else if (num >= 59) {
            printf("C\n");
        } 
        else if (num >= 50) {
            printf("D\n");
        } 
        else {
            printf("F (Fail)\n");
        }
        return 0;
}