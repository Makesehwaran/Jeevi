#include<stdio.h>
void main()
{
	int b,a,d;
	char c;
	printf("Enter the operation");
	scanf("%d\t%c\t%d",&a,&c,&d);
	if(c=='%')
		 printf("%d",a%d);
	if(c=='/')
		printf("%d",a/d);
	}
	
