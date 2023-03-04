//Find S=1-2+3-4+5-......+51 using loop
#include<stdio.h>
int main()
{
int i,sum=0;

for(i=1;i<=51;i++)
{
    if(i%2==0)             
    {
        sum-=i;
    }
    else if(i%2!=0)
    {
        sum+=i;                                                     
        }
    }
     printf("The calculation of even and odd number are:%d",sum);


return 0;

}