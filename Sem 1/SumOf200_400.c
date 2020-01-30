#include<stdio.h>
main()
{
	int a,b,n,m;
	a=0;
	b=0;
	n=200;
	while(n<=400)
	{
		a=n+a;
		n++;
		n++;
	}
	printf("Sum Of Even =%d\n",a);
	m=201;
	while(m<=399)
	{
		b=m+b;
		m++;
		m++;
	}
	printf("Sum Of Odd =%d\n",b);
}
