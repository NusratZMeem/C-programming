//writing mlutiplication table using for loop

#include<stdio.h>
int main()
{
int i,n,m,product=1;
printf("enter the number for multiplication table: ");
scanf("%d",&m);
printf("enter the number for loop: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    product=m*i;
 printf("%d*%d=%d\n",m,i,product);

}


return 0;
}