//finding odd or even number

#include<stdio.h>
int main()
{

int number;
printf("enter a number");
scanf("%d",&number);

if(number%2==0)
{
    printf("The number is even");
}
else
{
    printf("the number is odd");
}

return 0;

}