#include<stdio.h>
void main()
{
int a=3,b=4,c=5;
printf("a=%d,b=%d,c=%d",a,b,c );
if(a>b&&a>c)
printf("a is greatest");
else if(b>c&&b>a)
printf("b is greatest");
else
printf("c is greatest");
}
