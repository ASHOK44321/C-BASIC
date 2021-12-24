#include<stdio.h>
main()
{
	int a,b;
	printf("enter the integer");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("the integer is even");
	}
	else
	{
		printf("the integer is odd");
	}
}
