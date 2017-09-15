#include<stdio.h>
void main()
{
int a,l,b,h,v,t;
printf("Enter the length,breadth,height");
scanf("%d%d%d",&l,&b,&h);
v=l*b*h;
printf("Volume of cuboid %d",v);
a=(l*b)+(l*h)+(b*h);
t=2*a;
printf("Total surface area is %d",t);
}
