#include<stdio.h>
#include<string.h>
void main()
{
    char a[40];
    int count=1,b,i; 
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]==" ")
        {
            count++;
        }
    }
    printf("%d",count);
}

