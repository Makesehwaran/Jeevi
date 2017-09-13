
#include<stdio.h>
void main()
{
int i,n,sum=0,count=0;
printf("Enter the limit to find sum of prime numbers");
scanf("%d",&n);
for(i=2,i<=n;i++)
 {
  for(j=2;j<=n;j++)
  {
   if(i%j==0)
    {
     count++;
     }
  }
     if(count==1)
     {
      sum=sum+i;
      }
     
 }
 printf("The sum is %d",sum);
}
