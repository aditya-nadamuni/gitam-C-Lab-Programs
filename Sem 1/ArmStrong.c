#include<stdio.h>
main()
{
	int a,b,c,n,p;
	c=0;
	scanf("%d",&a);
	p=a;
	while(a>0)
	{
		b=a%10;
		n=b*b*b;
		c=c+n;
		a=a/10;
	}
	if(c==p)
		{
			printf("Its An Armstrong No.");
		}
		else
		{
			printf("Its Not An Armstrong No.");
		}
}
