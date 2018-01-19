#include<stdio.h>
void main() {
    int a=44,s=0,r;
    do
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }while(a!=0);
    printf("%d",s);
}
