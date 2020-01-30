#include<stdio.h>
main()
{
	int a[8],b,c,i;
	a[0]=0;
	a[1]=1;
	for(i=0;i<8;i++)
	{
		c=a[i]+a[i+1];
		a[i+2]=c;
	}
	for(i=0;i<8;i++)
	{
		printf("\n%d",a[i]);
	}
}
