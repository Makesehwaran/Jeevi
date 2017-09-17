#include<stdio.h>
#include<string.h>
void main()
{
int i,j,n,c;
char a[15],b[15];
printf("Enter the string");
scanf("%s",a);
c=strlen(a);
for(i=c-1,j=0;i>=0,j<c;i--,j++)
{
b[i]=a[j];
}
for(i=0;i<c;i++)
printf("%c",b[i]);
}
