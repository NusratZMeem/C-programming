//1/1+1/(1+2)+1/(1+2+3)+……… nth term
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    printf("enter the terms:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum+=1/(i+(i+1));
}

printf("%f",sum);

    return 0;
}
