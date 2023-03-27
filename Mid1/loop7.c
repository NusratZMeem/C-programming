//write a program to compute the following series using while loop: 2^3+5^3+8^3+...+n^3
#include<stdio.h>
int main()
{
    int i=2,n,sum=0;
    printf("enter the number you want to print till: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum += i * i * i;  // add i^3 to the sum
      i += 3;  // increment i by 3
        
    }
printf("the sum of the series is:%d",sum);

    return 0;
}