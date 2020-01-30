#include<stdio.h>
void fib(int f1,int f2,int x)
{
	int i,f3;
	printf("%3d%3d",f1,f2);
	for(i=0;i<x;i++)
	{
		f3=f1+f2;
		printf("%3d",f3);
		f1=f2;
		f2=f3;
	}
}
	main()
	{
		void fib(int,int,int);
		int f1=0,f2=1,n;
		printf("enter n");
		scanf("%d",&n);
		fib(f1,f2,n);
	}

