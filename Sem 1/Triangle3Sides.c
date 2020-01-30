#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		printf("Triangle Can Be Formed");
	}
	else
	{
		printf("Triangle Cannot Be Formed");
	}
}
