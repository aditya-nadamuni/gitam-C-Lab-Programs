#include<stdio.h>
main()
{
	int i,n,s;
	s=0;
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		if(n%2==0)
		{
			s=s+i;
		}
	}
	printf("%d",s);
}
