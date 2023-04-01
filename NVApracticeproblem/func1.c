//Add numbers with Function with parameters
#include<stdio.h>

int add(int a,int b)
{
int sum=a+b;
return sum;
}

int main()
{
    int x,y,result;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);
    
    result=add(x,y);

printf("The sum is %d",result);
return 0;
}