//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
int main()
{
int month,day;
printf("enter the number of month");
scanf("%d",&month);
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
    printf("31 days");
}
else if(month==4||month==6||month==9||month==11)
{
    printf("31 days");

}
else{
    printf("28/29 days");
}

return 0;
}