#include<stdio.h>
int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	f=f*i;
	return f;
}
main()
{
	int fact(int);
	int n,z;
	printf("enter n");
	scanf("%d",&n);
	z=fact(n);
	printf("fact=%d",z);
}
