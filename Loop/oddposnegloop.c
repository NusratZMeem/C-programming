//Find S=1-3+ 5-7+9-......+51 using loop in c
#include <stdio.h>

int main() {
    int sum = 0;
    for(int i=1; i<=51; i+=2) {
        if(i % 4 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    printf("Sum of the series is: %d", sum);
    return 0;
}