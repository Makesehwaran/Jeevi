# include<stdio.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
printf("Enter the number...\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  fact=fact*i;
  }
  printf("\nThe factorial of %d is %d",n,fact);
  }
