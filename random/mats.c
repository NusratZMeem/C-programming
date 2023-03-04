#include <stdio.h>

int main() {
    char operator;
    float operand1, operand2, result;

    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter the first operand: ");
    scanf("%f", &operand1);

    printf("Enter the second operand: ");
    scanf("%f", &operand2);

    if (operator == '+') {
        result = operand1 + operand2;
    } else if (operator == '-') {
        result = operand1 - operand2;
    } else if (operator == '*') {
        result = operand1 * operand2;
    } else if (operator == '/') {
        if (operand2 == 0) {
            printf("Error: division by zero\n");
            return 0;
        }
        result = operand1 / operand2;
    } else {
        printf("Error: invalid operator\n");
        return 0;
    }

    printf("Result: %f\n", result);

    return 0;
}
