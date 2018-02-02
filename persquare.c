#include<stdio.h>
void main()
{
	int a,b,i,c;
	printf("Enter 2 number");
	scanf("%d %d",&a,&b);
	c=a*b;
	for(i=0;i<1000;i++)
	{
		if(c==(i*i))
		{
			printf("yes");
		}
		
	}
}
