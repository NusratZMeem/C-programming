#include<stdio.h>
int main()
{
int number;
printf("enter a number");
scanf("%d",&number);

if(number%2==0)
{
    printf("even");

}
else if(number%2==!0)
{
    printf("odd");
}
else
{
    printf("invalid");
}
return 0;
}