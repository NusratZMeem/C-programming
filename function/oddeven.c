// function to determine if a number is odd or even using void
#include <stdio.h>

// function to determine if a number is odd or even
void odd_or_even(int num) {
   if (num % 2 == 0) {
      printf("%d is even.\n", num);
   }
   else {
      printf("%d is odd.\n", num);
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   // call the odd_or_even function to determine if the number is odd or even
   odd_or_even(num);

   return 0;
}
