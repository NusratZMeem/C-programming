//C program to find the largest of three numbers using switch case.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);

switch(a>b&&a>c?1:b>c&&b>a?2:3)
{
    case 1:
    printf("1st number is the largest");
    break;

    case 2:
    printf("2nd number is the largest");
    break;

    case 3:
    printf("3rd number is the largest");
    break;
}
return 0;

}