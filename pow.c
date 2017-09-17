#include<stdio.h>
void main()
{
int a[10],i,p1,p2,n,sum=0;
printf("Enter the range");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i%2==0)
{
p1=a[i]*a[i];
sum=sum+p1;
printf("%d^2+",a[i]);
}
else
{
p2=a[i]*a[i]*a[i];
sum=sum+p2;
printf("%d^3+",a[i]);
}
}
printf("The sum is %d",sum);
}
