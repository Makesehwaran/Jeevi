#include<stdio.h>
void main()
{
int i;
printf("Enter a number between 1 to 100");
scanf("%d",&i);
if(i>100||i==0)
{
printf("Error!..Enter a valid input");
}
}
