#include<stdio.h>
int main()
{
    int n,m,result;
    char operator;

printf("enter the numbers: ");
scanf("%d%d",&n,&m);
printf("enter the operators(+,-,*,/ ): ");
scanf(" %c",&operator);

switch(operator)
{
    case '+':
    result=m+n;
    printf("The sum is %d",result);
    break;

case '-':
result=m-n;
printf("%d",result);
break;

case '*':
result=m*n;
printf("%d",result);
break;

case '/':
result=m/n;
printf("%d",result);
}
return 0;
}