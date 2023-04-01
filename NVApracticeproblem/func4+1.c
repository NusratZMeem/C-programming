//Find roots of quadratic equation Function with parameters#include <stdio.h>
#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float root1, root2;

    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("The roots are %f and %f\n", root1, root2);
}

int main() {
    float a, b, c;

    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    findRoots(a, b, c);

    return 0;
}
