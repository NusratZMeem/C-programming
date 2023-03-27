//Write a C program to check whether a given number is positive or negative
#include<stdio.h>
int main()
{
int num;
printf("enter the number:");
scanf("%d",&num);

if(num<0)
{
    printf("negative");
}
else
{
    printf("postive");
}
return 0;
}