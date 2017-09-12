#include<stdio.h>
void main()
{
int a=2,b=3,t;
printf("a=%d,b=%d",a,b);
t=a;
a=b;
b=t;
printf("a=%d,b=%d",a,b);
}
