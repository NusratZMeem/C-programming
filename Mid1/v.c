// Write a C program to find the largest of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the numbers:");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a is the largest");
    }
    else if(b > c && b > a)
    {
        printf("b is the largest");
    }
    else if(c > a && c > b)
    {
        printf("c is the largest");
    }

    return 0;
}