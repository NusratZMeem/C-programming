//Program to relate two integers using =, > or < symbol
#include<stdio.h>
int main()
{
int number1,number2;

printf("input two numbers");
scanf("%d,%d",&number1,&number2);


if(number1==number2)
{
    printf("The numbers are equal");
}
else if(number1>number2)
{
    printf("The first number is greater than second one");
}
else
{
    printf("the second number is greater than the first one");
}


 return 0;
}