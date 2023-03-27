#include <stdio.h>

// function to determine if a number is positive, negative, or zero
void check_number(int num) {
   if (num > 0) {
      printf("%d is positive.\n", num);
   }
   else if (num < 0) {
      printf("%d is negative.\n", num);
   }
   else {
      printf("%d is zero.\n", num);
   }
}

int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);

   // call the check_number function to determine if the number is positive, negative, or zero
   check_number(num);

   return 0;
}
