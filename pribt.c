#include<stdio.h>
void main()
{
int a1,a2,count=0,i,j;
printf("Enter the intervals greater than 1");
scanf("%d %d",&a1,&a2);
for(i=a1+1;i<a2;i++)
{
 for(j=a1+1;j<a2;j++)
  {
    if(i%j==0)
    {
     count++;
     }
  }
     if(count==1)
     { printf("%d\t",i);
     }
}
}
