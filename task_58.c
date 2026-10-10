#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num==0){
        count =1;
    }else{
        if(num<0){
            num=-num;
        }
        while(num>0){
            num=num/10;
            count=count+1;
        }
    }
    printf("This number contain %d digits",count);
    return 0;
}