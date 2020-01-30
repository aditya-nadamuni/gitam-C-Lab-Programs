#include<stdio.h>

int prime(int x)
{
	int i,c=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			c=1;
			break;
		}
	}
	return c;
}
int main()
{
	int prime(int);
	int n,z;
	printf("enter n");
	scanf("%d",&n);
	z=prime(9);
	if(z==0)
	printf("prime");
	else
	printf("not prime");
	return 0;
}