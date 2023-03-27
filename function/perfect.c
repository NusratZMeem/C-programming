#include <stdio.h>

int is_perfect(int num) {
    int sum = 0;

    // Check all numbers from 1 to num/2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i; // If i is a factor of num, add it to the sum
        }
    }

    // If the sum of factors equals the number, it's a perfect number
    if (sum == num) {
        return 1; // Return 1 if the number is perfect
    } else {
        return 0; // Return 0 if the number is not perfect
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_perfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
