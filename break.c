
#include<stdio.h>
main()
{
int n, i, fc= 0;
scanf("%d",&n);
for(i=2; i<=n/2; i++)
{
    if(n%i==0)
    {
    	printf("%d ",i);
    	fc++;
    	break;
	}
}
if (fc==0)
{
	printf("prime number");
}
else
{
	printf("not prime number");
}

}
