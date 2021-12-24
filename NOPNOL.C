#include<stdio.h>
main()
{
	int cp,sp;
	printf("enter the cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("LOSS");
	}
    else if (cp<sp)
    {
    	printf("PROFIT");
	}
	else
	{
		printf("NO PROFIT NO LOSS");
	}
}

