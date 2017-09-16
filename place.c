#include<stdio.h>
#include<string.h>
void main()
{
int a,i,j;
char b[10];
printf("Enter a string");
scanf("%s",b);
a=strlen(b);
for(i=0;i<a;i++)
{
if(i%2==0)
printf("%c",b[i]);
}
printf("\t");
for(j=0;j<a;j++)
{
if(j%2!=0)
printf("%c",b[j]);
}
}
