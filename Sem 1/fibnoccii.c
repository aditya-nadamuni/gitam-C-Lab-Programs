#include<stdio.h>
main()
{
	int a,b,c,d,i;
	printf("Enter A No.");
	scanf("%d",&d);	
	a=0;
	b=1;
	printf("%d\n",a);
	printf("%d\n",b);
	i=1;
	while(i<=d)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		i++;
	}
}
