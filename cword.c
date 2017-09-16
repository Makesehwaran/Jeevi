#include<stdio.h>
void main()
{
char a[20]="I am fine";
int i,count=0;
do
{
 if(a[i]=="\0")
 {
 count++;
 }
 i++;
 }while(a[i]!=="\n");
 printf("There are %d words",count);
 }














'
