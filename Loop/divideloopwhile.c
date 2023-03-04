//Find S=(1/1+2)+(2/2+3)+(3\3+4)......+(N/N+N+1) using loop in c
#include <stdio.h>

int main() {
    int i=1,N;
    float sum = 0.0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    while(i <= N) {
        sum += (float)i / (i+i+1);
        i++;
    }

    printf("The sum of the series is: %f\n", sum);

    return 0;
}