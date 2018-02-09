#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int c,d,i,count=0;
    scanf("%s %s",a,b);
    c=strlen(a);
    d=strlen(b);
    for(i=0;i<c;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]>b[i])
            {
            printf("%s",a);
            break;
            }
            else
            {
            printf("%s",b);
            break;
            }
        }
        else
          count++;
    }
    if(count==c)
    printf("%s",a);
}
