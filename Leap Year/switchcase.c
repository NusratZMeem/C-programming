#include<stdio.h>
int main()
{
int year,y;

printf("enter the year:");
scanf("%d",&year);

 y = year % 400 == 0 || year % 100 == 0 || year % 4 == 0;

switch(y)
{
    case 1:
    printf("leap year");
    break;

    case 0:
    printf("not leap year");
    break;

    default:
    printf("not leap year");
}


return 0;
}