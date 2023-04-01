//1/1-1/3+1/5-1/7…..,, nth term
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += 1.0 / (2 * i - 1);
        } else {
            sum -= 1.0 / (2 * i - 1);
        }
    }

    printf("The sum of the series is: %f\n", sum);

    return 0;
}
