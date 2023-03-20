#include<stdio.h>
// int sum (int a, int b, int c);
int sum(int a,int b,int c)
{ int result;
    result= a+b+c;
    return result;
}

int main()
{
 int s,x,y,z;
 printf("enter the number: ");
 scanf("%d%d%d",&x,&y,&z);
 s=sum(x,y,z);
printf("%d",s);
   return 0;
}

