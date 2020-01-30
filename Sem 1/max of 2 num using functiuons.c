#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	return x;
	return y;
}
main()
{
	int max(int,int);
	int n,m,z;
	printf("enter n and m");
	scanf("%d%d",&n,&m);
	z=max(n,m);
	printf("max=%d",z);
}
