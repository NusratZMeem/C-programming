//Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

switch(num%2==0)
{ 
    case 0:
printf("the number is odd");
break;

case 1:
printf("even");
break;
}

return 0;
}