#include<stdio.h>
#include<string.h>
void main()
{
int a,i,j;
char b[15];
printf("Enter the string");
scanf("%s",b);
a=strlen(b);
for(i=0;i<a;i++)
{
if(a[i]=='.')
{
for(j=i+1;j<a;j++)
printf("%c",a[j]);
}
}
}
