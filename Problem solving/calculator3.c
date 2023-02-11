#include<stdio.h>
int main()
{
float num1,num2,result;
char operator;

printf("enter the operator: (+, -, *, /) ");
scanf("%c",&operator);

printf("enterthe numbers");
scanf("%f %f",&num1,&num2);

if (operator=='+')
{
result=num1+num2;
printf("add:%f",result);
}
else if (operator=='-')
{
result=num1-num2;
printf("sub:%f",result);
}
else if (operator=='*')
{
result=num1*num2;
printf("multiplication:%f",result);
}

else if (operator=='/')
{
result=num1/num2;
printf("division:%f",result);
}
else
{
printf("invalid");
}
return 0;
}