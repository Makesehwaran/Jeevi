#include<stdio.h>
void main() {
  int a=4656;
  int count=0;
  while(a!=0)
  {
       a=a/10;
       count++;
  }
printf("%d digits",count);
}
