
#include <stdio.h>
int main()
{
   int n;
   printf("Enter the number of times you want to print your name:");
   scanf("%d", &n);
   char name[25];
   printf("Enter your name:");
   scanf("%s", name);
   for(int i = 1; i <= n; i++) {    
       printf("%s\n", name);
   }
   return 0;
}