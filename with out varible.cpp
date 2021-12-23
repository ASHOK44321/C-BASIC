#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("\na=%d,b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d,b=%d",a,b);	
}
