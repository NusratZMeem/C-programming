//Subtract numbers using Function with parameters in c
#include<stdio.h>
int subtract(int a,int b)
{
    int diff=a-b;
    return diff;
}
int main()
{
    int x,y,result;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
   result=subtract(x,y);
printf("the subtraction is:%d",result);
return 0;
}