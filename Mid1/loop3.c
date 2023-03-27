//print all odd even numbers from 1 to 100
#include<stdio.h>
int main()
{
int i;
for(i=0;i<=10;i++)
{
    if(i%2==0)
    {
        printf("Even:%d\n",i);
    }
    else
    {
        printf("odd:%d\n",i);
    }

}

    return 0;
}