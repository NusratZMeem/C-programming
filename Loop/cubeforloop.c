#include<stdio.h>
int main()
{
    int i,m,cube;
    printf("enter the number");
    scanf("%d",&m);
    
    for(i=1;i<=m;i++)
    {
        cube=i*i*i;
        printf("the cube %d:%d\n",i,cube);

    }


    return 0;
}