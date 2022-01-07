#include<stdio.h>
main()
{
int n, i, count = 0;
scanf("%d",&n);
for(i=1; i<=n/1; ++i)//16/2=8
{
    if(n%i==0)
    {
    	count += 1;
	}
}
if (count==2)
{
	printf("prime number");
}
else
{
	printf("not prime number");
}

}
