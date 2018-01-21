#include<stdio.h>
void main()
{
    int a,i=1,j;
    printf("Enter the number");
    scanf("%d",&a);
    for(j=1;j<a;j++)
    {
        i=i*2;
        if(i==a)
        printf("Yes");
    
    }
}
