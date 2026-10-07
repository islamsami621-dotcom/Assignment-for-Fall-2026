#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Here is your even number 2 to %d.\n",num);
    for(int i=2; i<=num;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}