#include<stdio.h>
main()
{
	int i,n,s;
	s=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		s=s*i;
	}
	printf("%d",s);
}
