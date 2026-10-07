#include <stdio.h>

int main() {
    char op;
    double a, b;

    printf("Enter first numbers: ");
    scanf("%lf", &a);   
    printf("Enter operator +, -, *, /: ");
    scanf(" %c", &op); 

    printf("Enter two numbers: ");
    scanf("%lf", &b);

    switch (op) {
        case '+': printf("Result: %.2f", a + b); break;
        case '-': printf("Result: %.2f", a - b); break;
        case '*': printf("Result: %.2f", a * b); break;
        case '/': 
            if (b != 0){ printf("Result: %.2f", a / b);
            }else{ 
                printf("Error: Division by zero!");
        }
        break;
        default: 
            printf("Error: Invalid operator!");
    }
    
    return 0;
}