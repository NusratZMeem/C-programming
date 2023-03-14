//Write a C program to find maximum between two numbers using switch case.
#include<stdio.h>
int main()
{
int num1,num2;
printf("enter the two numbers: ");
scanf("%d%d",&num1,&num2);

switch(num1>num2)
{
    case 0:
    printf("The second number is maximum ");
    break;


    case 1:
    printf("The First number is maximum");
     break;

}
return 0;
}