//Write a C program to print all natural numbers in reverse (from n to 1)

#include<stdio.h>
int main()
{int i,n;
printf("the number is: ");
scanf("%d",&n);

 for(i=n;i>=1;i--)
{
printf("the number in reverse is:%d\n",i);
}

return 0;
}
