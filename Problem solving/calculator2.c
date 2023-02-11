#include<stdio.h>
int main()
{
float num1,num2,add,sub,multiply,divide;


printf("enter two numbers");
scanf("%f %f",&num1,&num2);

add=num1+num2;

printf("the addition is :%f\n",add);


sub=num1-num2;
printf("the subtraction is:%f\n",sub);

multiply=num1*num2;
printf("the multiplication is:%f\n",multiply);

divide=num1/num2;
printf("the division is:%f",divide);

return 0;
}