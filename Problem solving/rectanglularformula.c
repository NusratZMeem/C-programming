//area=length*width
//Perimeter=2*(length+width)

#include<stdio.h>
int main()
{
int area,perimeter,length,width;

printf("enter length and width");
scanf("%d %d",&length,&width);

area=length*width;
printf("The area is:%d\n",area);


perimeter=2*(length+width);
printf("The perimeter is:%d",perimeter);

return 0;
}