#include<stdio.h>
main()
{
	int a,b,c,i,n,s;
	printf("Enter Nth No.");
	scanf("%d",&n);
	s=0;
	a=0;
	b=1;
	s=a+b;
	i=1;
	do
	{
		c=a+b;
		s=s+c;
		a=b;
		b=c;
		i++;
	}
	while(i<=n-2);
    printf("\n%d",s);
}
