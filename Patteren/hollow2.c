#include <stdio.h>

int main() {
   int m, n;
   printf("Enter the number of rows (m): ");
   scanf("%d", &m);
   printf("Enter the number of columns (n): ");
   scanf("%d", &n);

   // loop through each row
   for (int i = 0; i < m; i++) {
      // loop through each column
      for (int j = 0; j < n; j++) {
         // print asterisks for first and last rows
         // and for first and last columns
         if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
            printf("*");
         }
         // otherwise print a space
         else {
            printf(" ");
         }
      }
      printf("\n");
   }

   return 0;
}
