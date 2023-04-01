//1/(1+2)+1/(2+3)+1/(3+4)+…n th term
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i+(i+1));
    }
    
    
    printf("Sum of the series is: %f", sum);
    
    return 0;
}
