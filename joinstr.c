#include <stdio.h>
#include<string.h>

void main()
{
    char a[15],b[15],c[20];
    int d,e,f,i,j=0;
    printf("Enter one string");
    scanf("%s",a);
    printf("Enter next string");
    scanf("%s",b);
    d=strlen(a);
    e=strlen(b);
    f=d+e;
    for(i=0;i<f;i++)
    {
        if(i<d)
        c[i]=a[i];
        else
        {
            c[i]=b[j];
            j++;
        }
        
    }
    for(i=0;i<f;i++)
    printf("%c",c[i]);
    
}



