#include<stdio.h>
void main() {
  int a=4656;
  int r,count=0;
  while(a!=0)
  {
       r=a%10;
       a=a/10;
       count++;
  }
printf("%d digits",count);
}
