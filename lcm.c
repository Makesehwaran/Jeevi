 #include<stdio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter 2 numbers");
 	scanf("%d %d",&a,&b);
 	c=(a>b)?a:b;
 	while(1)
 	{
 		if(c%a==0&&c%b==0)
 		{
 			printf("%d",c);
 			c++;
		 }
	 }
}
	 	
