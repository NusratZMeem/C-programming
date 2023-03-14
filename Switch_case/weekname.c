// Write a C program to print day of week name using switch case.
#include <stdio.h>
int main()
{
    int day, week;
    printf("Enter the week number:");
    scanf("%d", &week);

    switch (week)
    {
    case 1:
        printf("Saturday");
        break;

    case 2:
        printf("Sunday");
        break;
    }
    return 0;
}
