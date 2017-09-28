#include<stdio.h>
#include<string.h>
void main()
{
char a[13],b[13],c[13];
int n,i,j,co=0;
printf("Enter the string");
scanf("%s",a);
n=strlen(a);
for(i=0,j=n-1;i<n,j>=0;i++,j--)
{
b[j]=a[i];
}
for(i=0;i<n;i++)
{
printf("%c",b[i]);
}
printf("\n");
j=0;
for(i=0;i<n;i++)
{
if(b[i]!='a'&&b[i]!='e'&&b[i]!='i'&&b[i]!='o'&&b[i]!='u'&&b[i]!='A'&&b[i]!='E'&&b[i]!='I'&&b[i]!='O'&&b[i]!='U')
{
c[j]=b[i];
j++;
co++;
}
}
for(i=0;i<co;i++)
{
printf("%c",c[i]);
}
}
