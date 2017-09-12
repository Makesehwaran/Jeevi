#include<stdio.h>
void main()
{
int a,n,r=0,l;
printf("Enter the number");
scanf("%d",&a);
l=a;
while(a!=0)
{
n=a%10;
r=r+n*n*n;
a=a/10;
}
if(l==r)
{
printf("The number is armstrong");
}
else
{
printf("The number is not armstrong");
}
}
