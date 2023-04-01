//Divide numbers using Function with parameters in c
#include <stdio.h>

float divide(float a, float b) {
    float quotient = a / b;
    return quotient;
}

int main() {
    float x, y, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    result = divide(x, y);

    printf("The quotient of %f and %f is %f.\n", x, y, result);

    return 0;
}
