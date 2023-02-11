#include<stdio.h>
int main()
{
char X;
printf("checking vowel consonant");
scanf("%c",&X);

if(X==('a'|| 'e'|| 'i'||'o'||'u'||'A'|| 'E'|| 'I'||'O'||'U'))
{
    printf("the letter is a vowel:%c",X);
}
else{
    printf("the letter is consonant");
}
return 0;
}