#include <stdio.h>
int main()
{
    char operator;
    float number1;
    float number2;

    printf("enter the operator: (+ - * /)");
    scanf("%c", &operator);

    printf("enter the 1st number");
    scanf("%f",&number1);

    printf("enter the 2nd number");
    scanf("%f",&number2);


    return 0;
}