#include<stdio.h>
void main()
{
 int a[10],b[10],n,j=0,i=0,d,c;
 printf("Enter the number of ninjas in each group");
 scanf("%d",&n);
 printf("Enter the power of each clans of 2 groups");
 do
 {
 	scanf("%d",&a[i]);
 	scanf("%d",&b[i]);
 	i++;
 }while(i<n);
 do
 {  c=a[j]-b[j];
    if(c<0)
    d=-1*c;
 	printf("%d\n",d);
 	
 	j++;
 }while(j<n);
 	
}
