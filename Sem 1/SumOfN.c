#include<stdio.h>
main()
{
	int n,i,s;
	s=0;
	printf("enter a no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	printf("%d",s);
}
