//Write a program to compute the following series using while loop: 4+11+18++....+n
#include<stdio.h>
int main()
{
    int i=4,n,sum=0;
    printf("The number you want to print till:");
    scanf("%d",&n);
    while(i<=n)
    {   
        sum=sum+i;
        i=i+7;
        
    }
printf("the sum is:%d",sum);

    return 0;
}