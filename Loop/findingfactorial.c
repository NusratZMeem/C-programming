//Write a C program to find F=1*2*3*4.......*N using loop.(user will give N)
#include<stdio.h>
int main()
{ int i,N,f=1;
printf("enter the number: ");
scanf("%d",&N);

for(i=1;i<=N;i++)
{
    f=f*i;
}
printf("The factorial of %d is : %d",N,f);
    return 0;
}