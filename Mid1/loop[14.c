//Write a C program that can be used to find whether a number is a prime number or not
#include<stdio.h>
int main()
{
    int i,m,c=0;
    printf("enter the number:");
    scanf("%d",&m);
//if(m!=0){
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
          c++;
        }
        
    }
//}
    if(c==2)
    {
        printf("prime number");

    }
    else
    {
        printf("not prime number");
    }
return 0;
}