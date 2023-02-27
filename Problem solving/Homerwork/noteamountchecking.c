#include<stdio.h>

int main() {
    int amount;
    int TK_500, TK_100, TK_50, TK_20, TK_10, TK_5, TK_2, TK_1;

    printf("Enter amount: ");
    scanf("%d", &amount);

    TK_500 = amount / 500;
    amount = amount % 500;

    TK_100 = amount / 100;
    amount = amount % 100;

    TK_50 = amount / 50;
    amount = amount % 50;

    TK_20 = amount / 20;
    amount = amount % 20;

    TK_10 = amount / 10;
    amount = amount % 10;

    TK_5 = amount / 5;
    amount = amount % 5;

    TK_2 = amount / 2;
    amount = amount % 2;

    TK_1 = amount;

    printf("Total number of notes:\n");
    printf("500: %d\n", TK_500);
    printf("100: %d\n",TK_100);
    printf("50: %d\n",TK_50);
    printf("20: %d\n",TK_20);
    printf("10: %d\n",TK_10);
    printf("5: %d\n",TK_5);
    printf("2: %d\n",TK_2);
    printf("1: %d\n",TK_1);

    return 0;
}