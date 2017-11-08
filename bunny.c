#include<stdio.h>
int cal(int);
void main()
{
int n,d;
printf("Enter number of bunnies");
scanf("%d",&n);
d=cal(n);
printf("The number of ears are %d",d);
}
int cal(int a)
{
static int e=0;
 if(a!=0)
 {
  e+=2;
  a--;
  cal(a);
  }
 }
 
