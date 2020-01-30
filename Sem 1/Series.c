#include<stdio.h>
#include<math.h>
main()
{
	int n,X,b,x,a=1,s=1;
	printf("Enter Nth No.");
	scanf("%d",&n);
	printf("Enter x ");
	scanf("%d",&x);
	do
	{
		b=pow(x,a);
		X=a*b;
		s=s+X;
		a++;
	}
	while(a<n);
	printf("%d",s);
}
