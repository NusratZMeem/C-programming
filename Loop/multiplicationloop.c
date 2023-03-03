//writing mlutiplication table using while loop

#include<stdio.h>
int main()
{
int number ;
int count=1;

printf("Enter the number");
scanf("%d",&number);

while(count<=10)
{
int product =number*count;
printf("%d*%d= %d\n",number,count,product);
count=count+1;
}
return 0;
}