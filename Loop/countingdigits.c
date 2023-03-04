#include <stdio.h>

int main() {
    int num, first_digit, last_digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // find the first digit
    first_digit = num;
    while (first_digit >= 10) {
        first_digit /= 10;
    }
    
    // find the last digit
    last_digit = num % 10;
    
    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);
    
    return 0;
}
