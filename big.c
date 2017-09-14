#include<stdio.h>
void main()
{
int a[10],i,j,t;
printf("Enter ten numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("The greatest number is %d",a[n-1]);
}
