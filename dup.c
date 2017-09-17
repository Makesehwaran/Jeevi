
#include<stdio.h>
void main()
{
long int a[10];
int i;
printf("Enter the numbers");
for(i=0;i<10;i++)
scanf("%ld",&a[i]);
for(i=0;i<9;i++)
{
{
if(a[i]==a[i+1])
count++;
}
if(count!=0)
printf("%ld is repeated",a[i]);
}
}
