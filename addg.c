#include<stdio.h>
void main()
{
int a[10],n,sum=0,i,j,t;
printf("Enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
 if(a[i]>a[j])
 {
 t=a[i];
 a[i]=a[j];
 a[j]=t;
 }
 }
 }
 sum=a[0]+a[n-1];
 printf("The sum is %d",sum);
 }
