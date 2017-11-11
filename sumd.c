#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("Enter the digits greater than 9");
scanf("%d",&n);
if(n>9)
{
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("The sum is %d",sum);
}
else
printf("Enter the number greater than 9");
}
}
