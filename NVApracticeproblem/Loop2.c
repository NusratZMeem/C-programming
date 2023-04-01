//1^3-2^3+3^3……n th term
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the number of terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum-(i*i*i);
        }
        else
        {
            sum=sum+(i*i*i);
        }
        
    }
    printf("Sum=%d",sum);
    
    return 0;
}
