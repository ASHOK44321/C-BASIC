     #include<stdio.h>
     main()
     {
     	int n,i,sum=0;
     	scanf("%d",&n);
     	for (i=1;i<n;i++)
	{
     		if(n%i == 0)
		{
		
		   	sum += i;
		printf("%d              ",i);
		}
		
    }
     	if (sum==n)
     	{
     		printf("perfect number");
		}
		else
		 {
		 	printf("non perfect");
		 }
	
	 }
