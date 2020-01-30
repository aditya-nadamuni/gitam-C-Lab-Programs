#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is min");
		}
	}
	else if (b<c)
	{
		printf("b is min");
	}
	else
	{
		printf("c is min");
	}
}
