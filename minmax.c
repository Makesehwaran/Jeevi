#include <stdio.h>
void main()
{
    int a[10],n,min,max,i;
    printf("Enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
        max=a[i];
        }
    }
     for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
        min=a[i+1];
        }
    }
    printf("%d %d",min,max);
}
