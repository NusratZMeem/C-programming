#include<stdio.h>
int main()
{
int x,y,temp;
 
 x=4;
 y=8;
temp = x;
x=y;
y=temp;
printf("printing x,y:%d  %d",x,y);

    return 0;
}