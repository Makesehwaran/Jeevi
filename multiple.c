
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    while(a%10!=0)
    {
        a++;
    }
    printf("%d",a);
       
}
