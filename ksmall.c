 #include<stdio.h>
void main()
{
    int a[20],k,n,i,j,temp,t;
    printf("Enter the number of elements and position");
    scanf("%d %d",&n,&k);
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

printf("\n%d",a[k]);
}


