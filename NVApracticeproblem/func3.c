//Multiply numbers using Function with parameters in c
#include <stdio.h>

int multiply(int a, int b) {
    int product = a * b;
    return product;
}

int main() {
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = multiply(x, y);

    printf("The product of %d and %d is %d.\n", x, y, result);

    return 0;
}
