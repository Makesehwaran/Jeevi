#include<stdio.h>
void main()
{
int a1,a2,i;
printf("Enter the intervals");
scanf("%d%d",&a1,&a2);
for(i=a1+1;1<a2;a1++)
{
 if(a1%2!=0)
 {
 printf("%d",a1);
 }
 }
 }
