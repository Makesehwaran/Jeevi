#include<stdio.h>
void main()
{
int sum=0,i,n;
printf("Enter the limit");
scanf("%d"&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("The sum of natural numbers %d",sum);
}
