#include<stdio.h>
main()
{
	int a,b,s;
	scanf("%d",&a);
	s=0;
	while(a>0)
	{
		b=a%10;
		s=s+b;
		a=a/10;
	}
	printf("%d",s);
}
