//1/(1+2)+2/(2+3)+3/(3+4)+….. n th term
#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += (float)i / (i+(i+1));
    }
    
    
    printf("Sum of the series is: %f", sum);
    
    return 0;
}
