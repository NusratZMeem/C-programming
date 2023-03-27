//Write a C program to read an integer from user
//and count the total number of digits in it.
#include<stdio.h>
int main()
{
int i,count=0;
printf("Enter an integer:");
scanf("%d",&i);
while(i!=0)
{
count++;
i=i/10;
}
printf("The number of digits in the integer is: %d\n", count);

    return 0;
}