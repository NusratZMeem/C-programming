////write a c program to display m natural numbers

#include<stdio.h>
int main()
{
int i,m;
printf("enter the number");
scanf("%d",&m);

for(i=1;i<=m;i++)
{
    printf("%d\n",i);
}
return 0;
}