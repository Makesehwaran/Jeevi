#include<stdio.h>
void main() {
    char a[100];
    int i,count=0;
    scanf("%s",a);
    for(i=0;i<100;i++)
       {
           if(a[i]=='.')
           count++;
       }
       printf("%d\tlines",count);
}
   
