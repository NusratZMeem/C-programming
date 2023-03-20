//Write a program in C to display the cube of the number up to an integer
#include<stdio.h>
int main()
{
    int i,n,cube=1;
    printf("enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("The number is %d\n",i);
        cube=i*i*i;
        printf("the cube is %d\n",cube);

    }

    return 0;
}