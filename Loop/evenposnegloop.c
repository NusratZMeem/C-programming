//Find S=2-4+6-8-......+50 using loop in c
#include <stdio.h>

int main() {
    int S = 0;
    for (int i = 2; i <= 50; i += 2) {
        if (i % 4 == 2) {
            S += i;
        } else {
            S -= i;
        }
    }
    printf("S = %d\n", S);
    return 0;
}