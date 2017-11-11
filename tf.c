#include<stdio.h>
void main()
{
char a[10];
printf("Enter the day");
scanf("%s",a);
if(a=="Monday"||a=="Tuesday"||a=="Wednesday"||a=="Thursday"||a=="Friday"||a=="Saturday")
printf("True");
else
printf("False");
}
