#include<stdio.h>
void main()
{
int n,i,a,p=1;
printf("Enter the number and it's power");
scanf("%d%d",&a,&n);
for(i=0;i<n;i++)
{
p=p*a;
}
printf("The value is %d",p);
}
