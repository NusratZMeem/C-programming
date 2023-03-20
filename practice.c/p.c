//1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
#include <stdio.h>
void main()
{
   int i,n;
   float s=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    
     printf("1/%d + ",i);
     s+=1.0/i;
    
    
     }
        printf("Sum of Series upto %d terms : %f \n",n,s);
}  