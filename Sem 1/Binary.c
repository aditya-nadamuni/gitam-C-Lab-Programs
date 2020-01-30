#include<stdio.h>
main()
{
	int a,n,b,c=1,d;
	printf("Enter A +ve No.");
	scanf("%d",&n);
	do
	{
		b=n%2;
		c=c*10+b;
		d=n/2;
	}
	while(b!=0);
	printf("%d",c);
}
