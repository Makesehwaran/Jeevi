#include<stdio.h>
void main()
{
int a1,a2,i;
printf("enter the intervals");
scanf("%d%d",&a1,&a2);
for(i=a1+1;i<a2;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}
