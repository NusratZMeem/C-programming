//c program to find sum and avarage of 10 natural numbers using while loop

#include<stdio.h>
int main()
{
int i=1,m,sum=0;
float avrg;
printf("enter 10 numbers:\n");
 while(i<=10)
{

 printf("Number %d:",i);
 scanf("%d",&m);
 sum=sum+m;
 i++;
}
avrg=sum/10.0;
printf("The sum is:%d",sum);
printf("the average is:%f",avrg);
return 0;
}