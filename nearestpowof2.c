#include<stdio.h>
void main()
{
    int a,i,b=2;
    scanf("%d",&a);
    for(i=1;i<1000;i++)
    {
      b=b*2;
      if(b>a)
      {
      printf("%d",b);
      break;
      }
    }
    }
