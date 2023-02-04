#include<stdio.h>
int main()
{
    float fahr,cel;
    
    printf("enter the temperature");
    scanf("%f",&fahr);
    cel = (5.0 / 9) * (fahr - 32); 
    printf("Fahrenheit to Celcius:%f",cel);

    return 0;
}