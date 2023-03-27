//Find the sum of the following series
//.1+2+3+4+5+......................+N (Take N as input)

#include<stdio.h>
int main()
{
int i,N,sum=0;
printf("enter the limit of series");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
    sum=sum+i;
}
printf("The sum is:%d",sum);
    return 0;
}