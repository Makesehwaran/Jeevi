#include<stdio.h>
void main()
{
int n;
printf("Enter the number..\n");
scanf("%d",&n);
if(n<0)
printf("negative");
else if(n>0)
printf("positive");
else
printf("zero");
}
