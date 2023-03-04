#include <stdio.h>

int main() {
   int num, count = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   for (int i = num; i > 0; i /= 10) {
       count++;
   }

   printf("The number of digits in %d is %d\n", num, count);
   return 0;
}