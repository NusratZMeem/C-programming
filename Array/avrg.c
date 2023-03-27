// Program to find the average of n numbers using arrays
#include<stdio.h>
int main()
{
 int a[10],i,n,sum=0;
 float average;
 printf("Enter the numbers of elemants: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   printf("enter the numbers:");
   scanf("%d",&a[i]);
   sum=sum+a[i];
 }
 average=(float)sum/n;
 printf("The average is %f: ",average);
 return 0;
}