#include <stdio.h>
int main()
{
    char operator;
    float number1;
    float number2;
    float result;

    printf("enter the operator: (c, s, +, -,  *,  /)");
    scanf("%c", &operator);

    printf("enter the 1st number");
    scanf("%f", &number1);

    printf("enter the 2nd number");
    scanf("%f", &number2);
    switch (operator)
    {
    case '+':
        result = number1 + number2;
        printf("Add: %f",result);
        break;
case'-':
result=number1-number2;
printf("sub: %f",result);
break;

case'*':
result = number1*number2;
printf("multiplication: %f",result);
break;

case '/':
result = number1 / number2;
printf("division: %f",result);
break;

case's':
result = number1*number1;
printf("square of number 1: %f\n",result);
result=number2 *number2;
printf("square of number 2: %f",result);
break;

case'c':
result = number1 *number1 *number1;
printf("cube of 1st number:%f\n",result);
result = number2 *number2 *number2;
printf("cube of 2nd number:%f",result);
break;

 default:
        printf("%c is invalid", operator);
        break;
    }

    return 0;
}