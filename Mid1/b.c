//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the two integers: ");
    scanf("%d %d",&n,&m);
    if(n==m)
    {
        printf("equal");
    }
    else{
        printf("not equal");
    }
return 0;
}