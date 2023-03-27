//  Write a C program to print a rectangle pattern of size m*n. For e.g. for m=10, n=5 print:
// **********
// **********
// **********
// **********
// **********
#include<stdio.h>
int main()
{ 
int i,j,m,n;
printf("Enter the value of row");
scanf("%d",&m);
printf("Enter the value of column");
scanf("%d",&n);

for(i=1;i<=m;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("*");
    }
    printf(" \n");
}

 return 0;
}