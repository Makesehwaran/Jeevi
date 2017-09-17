#include<stdio.h>
#include<string.h>
void main()
{
int a;
char b[15];
printf("Enter the string");
scanf("%s",b);
a=strlen(b);
if(a%2==0)
printf("The string is even length");
else
printf("The string is odd length");
}
