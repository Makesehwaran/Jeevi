#include<stdio.h>
void main()
{
int i,n,j;
printf("Enter the table number");
scanf("'%d",&i);
printf("Enter the limit");
scanf("%d",&n);
for(j=1;j<=n;j++)
{
printf("%d*%d=%d",i,j,i*j);
}
}
  
