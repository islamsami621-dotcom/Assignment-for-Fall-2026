#include<stdio.h>
int main(){
    char c;
    printf("Enter the charecter: ");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("The charecter is vowel");
        break;
        default:
        printf("The charecter is consonant");

    }
    return 0;
}