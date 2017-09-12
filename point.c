#include<stdio.h>
void main()
{
int a=2,b=5,*c,*d,sum;
c=&a;
d=&b;
sum=*c+*d;
printf("Sum is %d",sum);
}
