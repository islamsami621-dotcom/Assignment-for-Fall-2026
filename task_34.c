#include<stdio.h>
int main(){
    char alph;
    printf("Enter your Alphabet ");
    scanf("%c",&alph);
    if((alph=='a')||(alph=='e')||(alph=='i')||(alph=='o')||(alph=='u')){
        printf("The alphabet is vowel");
    }else{
        printf("The alphabet is consonant");
    }
    return 0;
}