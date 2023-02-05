#include <stdio.h>
int main()
{
    float age;

    printf("add your age");
    scanf("%f", &age);

    if (age < 18)
    {
        printf("you are not qualified for voting");
    }
    else (age >= 18) 
    {
            printf("you can vote your favourite candidate");
        }

    return 0;
}