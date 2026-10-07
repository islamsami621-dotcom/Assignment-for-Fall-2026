#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the final number you want to addition(ONLY ODD): ");
    scanf("%d",&num);
    for(int i=1;i<=num;i=i++){
        if(i%2!=0){
        sum=sum+i;
        }
    }
    printf("Your sum is %d",sum);
    return 0;
}
   