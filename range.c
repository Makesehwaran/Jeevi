#include<stdio.h>
void main()
{
int a;
printf("Enter the value between 1 and 9");
scanf("%d",&a);
if(a>9)
printf("You entered number is not in range");
else
printf("The entered number is %d",a);
}
