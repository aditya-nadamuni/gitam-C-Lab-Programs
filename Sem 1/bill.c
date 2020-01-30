#include<stdio.h>
main()
{
	float u,bill;
	int a;
	scanf("%d",&a);
	if(a<50)
	{
		u=a*0.5;
		bill=u*0.2;
		printf("Bill=%f",bill);
	}
	else if(a>=50&&a<150)
	{
		u=a*0.75;
		bill=u*20/100;
		printf("Bill=%f",bill);
	}
	else if(a>=150&&a<250)
	{
		u=a*1.20;
		bill=u*20/100;
		printf("Bill=%f",bill);
	}
	else if(a>250)
	{
		u=a*1.5;
		bill=u*20/100;
		printf("Bill=%f",bill);
	}
}
