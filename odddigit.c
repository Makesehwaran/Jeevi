#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],i;
    int b;
    printf("Enter the number");
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%c ",a[i]);
        }
    }
}
