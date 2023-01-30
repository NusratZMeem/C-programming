#include <stdio.h>
int main()
{
    char operator;
    float number1;
    float number2;
    float result;

    printf("enter the operator: (x, y, +, -,  *,  /,)");
    scanf("%c", &operator);

    printf("enter the 1st number");
    scanf("%f", &number1);

    printf("enter the 2nd number");
    scanf("%f", &number2);
    switch (operator)
    {
    case '+':
        result = number1 + number2;
        printf("Sum: %f",result);
        break;
case'-':
result=number1-number2;
printf("subtraction: %f",result);
break;

case'*':
result = number1*number2;
printf("multiplication: %f",result);
break;

case '/':
result = number1 / number2;
printf("division: %f",result);
break;

case'x':
result = number1*number1;
printf("square of number 1: %f",result);
result=number2 *number2;
printf("square of number 2: %f",result);
break;

case'y':
result = number1 *number1 *number1;
printf("cube of 1st number:%f",result);
result = number2 *number2 *number2;
printf("cube of 2nd number:%f",result);
break;

 default:
        printf("%c is invalid", operator);
        break;
    }

    return 0;
}