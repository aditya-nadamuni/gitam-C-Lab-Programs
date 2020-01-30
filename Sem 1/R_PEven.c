#include<stdio.h>
main()
{
	int a,b;
	printf("Enter A No.");
	scanf("%d",&a);
	do
	{
		b=a%10;
		if(b%2==0)
		{
			printf("\n%d",b);
		}
		a=a/10;
	}
	while(a>0);
}
