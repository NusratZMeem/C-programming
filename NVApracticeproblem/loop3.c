#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    
    printf("Sum of the series is: %f", sum);
    
    return 0;
}
