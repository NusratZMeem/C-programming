#include<stdio.h>
int main()
{
float num1,num2,add,sub,multiply,division;
char operator;

printf("enter the operator: (+, -, *, /) ");
scanf("%c",&operator);

printf("enterthe numbers");
scanf("%f %f",&num1,&num2);

if (operator=='+')
{
add=num1+num2;
printf("add:%f",add);
}
else if (operator=='-')
{
sub=num1-num2;
printf("sub:%f",sub);
}
else if (operator=='*')
{
multiply=num1*num2;
printf("multiplication:%f",multiply);
}

else if (operator=='/')
{
division=num1/num2;
printf("division:%f",division);
}
else
{
printf("invalid");
}
return 0;
}