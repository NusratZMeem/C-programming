//Write a C program to find the sum of first 100 even numbers

#include<stdio.h>
int main()
{
    int sum =0;
for(int i=2;i<=100;i=i+2)
{
sum=sum+i;
}
printf("%d",sum);
return 0;
 
}