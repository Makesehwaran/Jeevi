#include<stdio.h>
void main()
{
char a[10];
printf("Enter a string");
scanf("%s",a);
if(a[0]=='0'||a[0]=='1'||a[0]=='2'||a[0]=='3'||a[0]=='4'||a[0]=='5'||a[0]=='6'||a[0]=='7'||a[0]=='8'||a[0]=='9')
printf("yes");
else
printf("no");
}
