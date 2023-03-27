//Write a program that takes an integer as input and shows its factorial.
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter the number for factorial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
printf("the factorial is %d:",f);


return 0;
}