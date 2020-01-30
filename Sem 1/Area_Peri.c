/*Area & Perimeter Of Triangle*/
#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,peri,A;
	float area,d;
	a=34;
	b=46;
	c=78;
	A=(a+b+c)/2;
	area=sqrt(A*(A-a)*(A-b)*(A-c));
	printf("Area Of Given Sides =%f",area);
	peri=a+b+c;
	printf("\nPerimeter Of Given Sides =%d",peri);
}
