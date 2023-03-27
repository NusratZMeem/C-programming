// Write a C program to print all odd numbers from 1 to n (n is user input) using for loop
#include<stdio.h>
int main()
{
int i,n;
printf("Number till:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    if(i%2!=0)
    {
        printf("%d\n",i);
    }
}
    return 0;
}