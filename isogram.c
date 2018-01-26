#include<stdio.h>
#include<string.h>

void main()
{
    char a[15]="123";
    int i,count=0,c;
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
    }if(count==0)
       printf("yes");
     else
        printf("No");
    
}
