//Write a program in C to display the multiplication table for a given integer
#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("enter the number: ");
    scanf("%d",&n);
for(i=1;i<=10;i++)
{
    product=n*i;
    printf("%d*%d=%d\n",n,i,product);
}
return 0;
}