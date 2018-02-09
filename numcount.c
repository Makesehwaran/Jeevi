#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,b,count=0;
    scanf("%s",a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0')
        {
            count++;
        }
    }
    printf("%d",count);

}

