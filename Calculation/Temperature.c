#include<stdio.h>
int main()
{
    float Fahrenheit,Celcius;
    
    printf("enter the temperature");
    scanf("%f",&Fahrenheit);
    Celcius = (5.0 / 9) * (Fahrenheit - 32); 
    printf("Fahrenheit to Celcius:%f",Celcius);

    return 0;
}