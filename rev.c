#include<stdio.h>
void main()
{
int a,i,r;
printf("Enter the number");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
i=i*10+r;
a=a/10;
}
printf("The reverse order is %d",i);
}
