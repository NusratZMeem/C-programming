#include<stdio.h>
int main()
{
int num1,num2,quo,rem;

printf("enter the numbers");
scanf("%d %d",&num1,&num2);

quo= num1/num2;
rem= num1 % num2;

printf("Quotient is:%d\n",quo);
printf("Remainder is:%d",rem);

return 0;

}