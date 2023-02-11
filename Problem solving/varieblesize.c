#include<stdio.h>
int main()
{
int integertype;
float floating;
double doubletype;
char chartype;

printf("printing size of integer: %ld\n",sizeof(integertype));
printf("printing size of float:%ld\n",sizeof(floating));
printf("printing size of double:%ld\n",sizeof(doubletype));
printf("printing the size of char:%ld",sizeof(chartype));
    return 0;
}