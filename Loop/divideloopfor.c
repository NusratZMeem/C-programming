//Find S=1/2+2/3+3/4+......+N/N+1 using loop in c
#include <stdio.h>

int main() {
    int N;
    float sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        sum += (float)i / (i + 1);
    }

    printf("The sum of the series is: %f\n", sum);

    return 0;
}