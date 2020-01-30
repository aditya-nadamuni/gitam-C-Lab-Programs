#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a no.");
	scanf("%d",&a);
	c=0;
	while(a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
    printf("%d",c);
}
