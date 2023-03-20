//Write a C program to calculate the factorial of a given number.#include<stdio.h>
#include<stdio.h>
int main()
{
int i,num,f=1;
printf("enter the number: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
  f=f*i;
}
printf("The factorial of %d is %d",num,f);
return 0;
}