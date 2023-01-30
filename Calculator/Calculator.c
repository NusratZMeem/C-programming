#include <stdio.h>
int main()
{
    char operator;
    float number1;
    float number2;
    float result;

    printf("enter the operator: (sq, cube, +, -,  *,  /,)");
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











    default:
        printf("%c is invalid", operator);
        break;
    }

    return 0;
}