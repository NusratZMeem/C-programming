//Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all
//letters in small letters and the 2nd one will print them in capital letters.
//Example output: a b c d e ......... z
//A B C D ......... Z
#include<stdio.h>
int main()
{
    char letter;
    for(letter='a';letter<='z';letter++)
    {
        printf("%c",letter);
    }
    printf("\n");
    for(letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c", letter);
    }

    return 0;

}