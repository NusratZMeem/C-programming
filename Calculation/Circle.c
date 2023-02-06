#include<stdio.h>
#define PI 3.1416
int main()
{

float radius,area,diameter,circumference;
printf("Please enter radius");
scanf("%f",&radius);

area= PI*radius*radius;
diameter=2*radius;
circumference=2*PI*radius;

printf("area:%f\n",area);
printf("diameter:%f\n",diameter);
printf("circumference:%f\n",circumference);

return 0;
}