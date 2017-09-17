
#include<stdio.h>
void main()
{
long int a[10];
int i,n=10;
printf("Enter the numbers");
for(i=0;i<n;i++)
scanf("%ld",&a[i]);
for(i=0;i<n-1;i++)
{
{
if(a[i]==a[i+1])
count++;
}
if(count!=0)
printf("%ld is repeated",a[i]);
}
}
