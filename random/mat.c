#include <stdio.h>

int main() {
    char operator;
    double operand1, operand2, result;

    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &operand1, &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("%.2lf + %.2lf = %.2lf", operand1, operand2, result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("%.2lf - %.2lf = %.2lf", operand1, operand2, result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("%.2lf * %.2lf = %.2lf", operand1, operand2, result);
            break;
        case '/':
            if (operand2 == 0) {
                printf("Error: Cannot divide by zero");
            } else {
                result = operand1 / operand2;
                printf("%.2lf / %.2lf = %.2lf", operand1, operand2, result);
            }
            break;
        default:
            printf("Error: Invalid operator");
    }

    return 0;
}
