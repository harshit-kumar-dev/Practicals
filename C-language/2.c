//calculator using switch case
#include <stdio.h>
int main(){
    int num1, num2;
    char sign;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &sign);

    switch(sign) {
        case '+': printf("Result: %d\n", num1 + num2);
            break;
        case '-': printf("Result: %d\n", num1 - num2);
            break;
        case '*': printf("Result: %d\n", num1 * num2);
            break;
        case '/': printf("Result: %d\n", num1 / num2);
            break;
        case '%': printf("Result: %d\n", num1 % num2);
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}