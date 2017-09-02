#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter the limit for sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum is %d",sum);
}
