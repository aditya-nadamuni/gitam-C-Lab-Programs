#include<stdio.h>
#include<math.h>
main()
{
	int p,t,r,n;
	p=20,t=300,r=50,n=47;
	float c,a;
	a=p*pow((1+(float)r/100),n);
	c=a-p;
	printf("The Compound Interest Is %f",c);
}
