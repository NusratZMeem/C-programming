#include <stdio.h>

int main() {
   int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   
   // Iterate over each number in the array
   for (int i = 0; i < 10; i++) {
      // Multiply the current number by each number in the array
      for (int j = 0; j < 10; j++) {
         printf("%d\t", nums[i] * nums[j]);
      }
      printf("\n");
   }
   
   return 0;
}