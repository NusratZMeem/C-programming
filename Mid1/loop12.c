//Write a C program to find all the factors of a number.
#include<stdio.h>
int main()
{
    int i,num;
    printf("enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }


    }


    return 0;
}