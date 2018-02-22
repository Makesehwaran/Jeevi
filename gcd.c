#include <stdio.h>
void main()
{
   int a,b,i,c=1;
   printf("Enter 2 numbers");
   scanf("%d %d",&a,&b);
   for(i=2;i<=b;i++)
   {    
       if(a%i==0&&b%i==0)
       {
       c=c*i;
     break;
       }
   }
   
   printf("%d",c);
   
}

