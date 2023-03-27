//Write a C program to check whether a given number is even or odd
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    switch(num%2==0)
    {
    case 1:
    printf("even");
    break;

    case 0:
    printf("odd");
    break;
    }
return 0;
}