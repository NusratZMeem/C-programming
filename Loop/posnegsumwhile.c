//Find S=1-2+3-4+5-......+51 using while loop
#include <stdio.h>

int main() {
    int i = 1, sum = 0;

    while (i <= 51) 
    {
        if(i%2==0)
        {
            sum -= i;
        }
    else
    {
        sum+=i;
    }
     i++;
    }
    printf("The sum is %d\n", sum);

    return 0;
}