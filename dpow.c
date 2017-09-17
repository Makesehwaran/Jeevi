#include<stdio.h>
void power(int x);
void main()
{
int a;
printf("Enter a number");
scanf("%d",&a);
power(a);
}
void power(int x)
{
int y,i,j=1;
y=x;
for(i=1;i<=y;i++)
{
 j=j*2;
 if(j==y)
 {
 printf("The given number is power of 2);
 }
 }
 }
 
