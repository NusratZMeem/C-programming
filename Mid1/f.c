//Write a C program to determine eligibility for admission to a professional course based on the following criteria:
//Marks in Maths >=65
//Marks in Phy >=55
//Marks in Chem>=50
//Total in all three subject >=190
//or
//Total in Math and Physics >=140
#include<stdio.h>
int main()
{
int m,p,c,total;
printf("Enter the marks of math: ");
scanf("%d",&m);
printf("Enter the marks of physics: ");
scanf("%d",&p);
printf("Enter the marks of chemistry: ");
scanf("%d",&c);
total=m+p+c;
if(m>=65&&p>=55&&c>=50&&total>=190)
{
    printf("eligible");
}
else if (m>=65&&p>=55&&total>=140)
{
    printf("eligible");
}

else
{
    printf("not eligible");
}
    return 0;
}
