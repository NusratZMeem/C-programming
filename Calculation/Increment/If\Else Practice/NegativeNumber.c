//Program to display a number if it is negative

#include<stdio.h>
int main()
{
int number;

printf("input number");
scanf("%d",&number);

if (number<0)
{
    printf("the number is negative");
}
else
{
    printf("positive");
}

return 0;
}
