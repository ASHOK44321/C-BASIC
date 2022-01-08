#include<stdio.h>
main()
{
	int b,duck=0 ;
	printf("enter the value of b");
	scanf("%d",&b);
	while(b>0)
	{
		if (b%10 == 0)
		{
			duck== 1;
			break;
		}
		b = b/=10;
	}
	if (b>0 && duck==1 )
	{
		printf("\nduck number");
	}
	else
	{ 
	printf("\n not duck numer");
	}
}
