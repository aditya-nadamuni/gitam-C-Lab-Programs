#include<stdio.h>
#include<math.h>
main()
{
	int x,i,n,s,b;
	s=0;
	scanf("%d%d",&x,&n);
	for (i=0;i<=n;i++)
	{
		b=pow(x,i);
		s=s+b;
	}
	printf("%d",s);
}
