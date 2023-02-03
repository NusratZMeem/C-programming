#include<stdio.h>
int main()
{
//char name;
//char gender;
//float age;
float height;
float weight;
float BMI;

//printf("what is your name?");
//scanf("%c",&name);

//printf("what is your gender?");
//scanf("%c",&gender);

//printf("what is your age?");
//scanf("%f",&age);

printf("what is your height in meters?");
scanf("%f",&height);

printf("what is your weight kg?");
scanf("%f",&weight);

BMI = weight/(height*height);
printf("BMI:%f",BMI);

if (BMI<18.5)
{
printf("Underweight");
}

else if (18.5<BMI<24.9)
{
printf("Normal weight");
}

else if (25<BMI<29.9)
{
printf("Overweight");
}

else if (30<BMI)
{
    printf("Obese");
}

return 0;

}