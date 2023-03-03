//c program to find sum and avarage of 10 natural numbers using for loop

#include<stdio.h>
int main()
{
int i,m,sum=0;
float avrg;
printf("enter 10 numbers:\n");
 
 for(i=1;i<=10;i++)
{

 printf("Number %d:",i);
 scanf("%d",&m);
 sum=sum+m;
}
avrg=sum/10.0;
printf("The sum is:%d",sum);
printf("the average is:%f",avrg);
return 0;
}