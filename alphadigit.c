#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char a[10];
    int i,b,c=0,c1=0;
    printf("Enter the string");
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(isalpha(a[i]))
        c++;
        if(isdigit(a[i]))
        c1++;
    }
    if(c!=0&&c1!=0)
    printf("yes");
    else
    printf("No");
}

