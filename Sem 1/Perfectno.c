#include<stdio.h>
main()
{
	int n,i,s;
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	    i++;
	}
	if(s==n*2)
	{
		printf("Its a Perfect No.");
	}
	else
	{
		printf("Its not a Perfect No.");
	}
}
