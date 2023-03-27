//Write a program that prompts the user to insert an integer value, a decimal number and his name and print the inserted value as output
#include<stdio.h>
int main()
{
 int n;
 float d;
 char name[20];

 printf("enter an integer: ");
 scanf("%d",&n);
 printf("The number is:%d\n",n);

 printf("enter a decimal value:");
 scanf("%f",&d);
 printf("the decimal value is %f\n",d);

printf("enter the name:");
scanf("%s",&name[20]);
printf("Your name is:%c\n",name[20]);

 return 0;
}