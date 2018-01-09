#include<stdio.h>
void main()
{
int a[12],sum=0,n,i;
scanf("%d",n);
for(i=0;i<n;i++)
{
 scanf("%d",a[i]);
 }
 for(i=0;i<n;i++)
 {
 sum=sum+a[i];
 }
 printf("sum is %d",sum);
 }
 
