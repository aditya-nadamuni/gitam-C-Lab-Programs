#include<stdio.h>
main()
{
	int a,b;
	int add,sub,mult,mod;
	float div;
	printf("Enter Values");
	scanf("%d %d",&a,&b);
	add=a+b;
	sub=a-b;
	mult=a*b;
	mod=a%b;
	div=a/b;
	printf("Sum=%d\n",add);
	printf("Diff=%d\n",sub);
	printf("Multi=%d\n",mult);
	printf("Div=%f\n",div);
	printf("Mod=%d\n",mod);
}
