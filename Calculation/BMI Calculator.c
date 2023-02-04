#include<stdio.h>
int main()
{
float height,weight,BMI;

printf("enter your height in meters");
scanf("%f",&height);

printf("enter your weight in kg");
scanf("%f",&weight);

BMI = weight/(height*height);
printf("Body Mass Index(BMI):%f",BMI);

if (BMI<=18.5)
{
printf("Underweight");
}

else if (BMI<=24.9)
{
printf("Normal weight");
}

else if (BMI<=29.9)
{
printf("Overweight");
}

else if (30<=BMI)
{
    printf("Obese");
}

return 0;

}