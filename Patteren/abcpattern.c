#include<stdio.h>
int main()
{
    int i,j,r;
    printf("enter the rows:");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }


    return 0;
}