#include<stdio.h>
main()
{
	float a;
    int x;
    scanf("%f",&a);
	x=a;
	printf("Integral Part=%d\n",x);
	printf("Fractional Part=%f",x-a);
}
