#include<stdio.h>
int main()
{
int i,m,product=1;
printf("enter the number for multiplication table");
scanf("%d",&m);

for (i=1;i<=10;i++)
{
   //product=i*m;
    printf("%d*%d=%d\n",m,i,product);



}



    return 0;
}