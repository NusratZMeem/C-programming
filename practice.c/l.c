//Write a program in C to read 10 numbers from the keyboard and find their sum and average
#include<stdio.h>
int main()
{
int i,n,sum=0;
float avrg;
printf("enter a number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    printf("enter the number:%d\n",i);
     sum=sum+i;

}
printf("The sum is:%d\n",sum);
avrg=sum/n;
printf("The average is:%f\n",avrg);
return 0;
}