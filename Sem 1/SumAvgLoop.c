#include<stdio.h>
main()
{
	int a,n,i,s,m;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		s=s+m;
	}
	a=s/m;
	printf("%d",a);
}

