#include <stdio.h>

// function to determine if a number is positive, negative, or zero
int check_number(int num) {
   if (num > 0) {
      return 1; // return 1 for positive numbers
   }
   else if (num < 0) {
      return -1; // return -1 for negative numbers
   }
   else {
      return 0; // return 0 for zero
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   // call the check_number function to determine if the number is positive, negative, or zero
   int result = check_number(num);
   if (result == 1) {
      printf("%d is positive.\n", num);
   }
   else if (result == -1) {
      printf("%d is negative.\n", num);
   }
   else {
      printf("%d is zero.\n", num);
   }

   return 0;
}
