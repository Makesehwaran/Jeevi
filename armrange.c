#include<stdio.h>

void main()

{

int a,b,i,n,m,r=0,l;

printf("Enter the interval");

scanf("%d %d",&a,&b);
for(i=a+1;i<b;i++)
{
l=i;
m=l

while(l!=0)

{

n=l%10;

r=r+n*n*n;

l=l/10;

}

if(m==r)

{

printf("%d",i);

}

}

}
