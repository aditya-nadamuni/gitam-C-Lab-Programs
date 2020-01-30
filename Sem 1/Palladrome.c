#include<stdio.h>
main()
{
	int a,b,c,p;
	scanf("%d",&a);
	c=0;
	p=a;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	if(c==p)
	{
		printf("Its a Palladrome");
	}
	else 
	{
		printf("Its not a Palladrome");
	}
}
