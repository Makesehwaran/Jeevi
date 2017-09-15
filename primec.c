#include<stdio.h>
void main()
{
int a,b,i,j,count=0,count1=0;
 printf("Enter the range");
 scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
for(j=a+1;j<b;j++_
 {
  if(i%j==0)
   {
     count++;
     }
     }
     if(count==1)
     {
     count1++;
     }
    }
    printf("The number of prime number is %d",count1++);
    }
