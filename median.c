#include<stdio.h>
void main()
{
    int a[20],n,i,j,temp,t;
    printf("Enter the number of elements");
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j+1])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                 
             }
         }
    }
    printf("%d",a[n/2]);
    
}
