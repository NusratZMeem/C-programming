//odd even using non void
#include <stdio.h>

// function to determine if a number is odd or even
int odd_or_even(int num) {
   if (num % 2 == 0) {
      return 0; // return 0 for even numbers
   }
   else {
      return 1; // return 1 for odd numbers
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   // call the odd_or_even function to determine if the number is odd or even
   int result = odd_or_even(num);
   if (result == 0) {
      printf("%d is even.\n", num);
   }
   else {
      printf("%d is odd.\n", num);
   }

   return 0;
}
