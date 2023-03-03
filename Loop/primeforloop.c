//Write a C program to find the prime number using loop

#include<stdio.h>
int main()
{
int i,m,c=0;
printf("enter the number");
scanf("%d",&m);

for(i=1;i<=m;i++)
{
    if(m%i==0)
    {
        c++;
    }
    
}
if (c==2)
{
    printf("prime number");
}

else
{
    printf("not prime number");
}


    return 0;
}