// Hollow square pattern for N lines. E.g. for N=4:
// ****
// *  *
// *  *
// ****
#include<stdio.h>
int main()
{
int i,j,N;
printf("enter the row number:");
scanf("%d",&N);

for(i=1;i<=N;i++)
{
    for(j=1;j<=N;j++)
    {
        if(i==1||i==N||j==1||j==N)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;

}