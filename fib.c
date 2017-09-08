#include<stdio.h>
void main()
{
int f,f1=0,f2=1,n,i;
printf("Enter the limit");
scanf("%d",&n);
printf("%d %d",f1,f2);
for(i=2;i<n;i++)
{
f=f1+f2;
f1=f2;
f2=f;
printf("%d",f);
}
}
