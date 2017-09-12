#include<stdio.h>
void main()
{
int a,m,i=0,r;
printf("Enter the number");
scanf("%d",&a);
m=a;
while(a!=0)
{
r=a%10;
i=i*10+r;
a=a/10;
}
if(i==m)
printf("palindrome");
else
printf("Not a palindrome");
}
