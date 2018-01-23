#include<stdio.h>
void main()
{
int a[15],n,k,i;
printf("Enter the range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=0;i<n;i++)
{
 if(a[i]==k)
 printf("Yes");
 }
 }
