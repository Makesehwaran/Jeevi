#include<stdio.h>
void main()
{
	int A,B,C,a,d,n,l;
	printf("Enter 3 values");
	scanf("%d %d %d",&A,&B,&C);
	a=A;
	d=B;
	n=C;
	l=(n*d)+a-1;
	printf("The sum of AP is %d",((a+l)*n)/2);
}
