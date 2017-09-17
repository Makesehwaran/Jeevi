#include<stdio.h>
#include<string.h>
void main()
{
int i,n,t;
char a[15];
printf("Enter the string);
scanf("%s",a);
n=strlen(a);
if(n%2==0)
{
for(i=0;i<n;)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
i=i+2;
}
}
else
{
for(i=0;i<n-1;)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
i=i+2;
}
}
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
