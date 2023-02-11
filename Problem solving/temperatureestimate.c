#include<stdio.h>
int main()
{
float hour,minutes,convert,T;

printf("enter the hour");
scanf("%f %f",&hour,&minutes);

convert= hour+minutes/60;
printf("convert:%f",convert);

T=((4*convert*convert)/(convert+2))-20;

printf("print T:%f",T);




    return 0;
}