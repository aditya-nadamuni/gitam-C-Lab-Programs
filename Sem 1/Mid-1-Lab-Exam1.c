#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,total;
	printf("Enter the no. of coins present in");
	printf("  Rs. 10 ");
	scanf("%d",&a);
	printf("Rs. 5 ");
	scanf("%d",&b);
	printf("Rs. 2 ");
	scanf("%d",&c);
	printf("Re 1 ");
	scanf("%d",&d);
	e=a*10;
	f=b*5;
	g=c*2;
	h=d*1;
	total=e+f+g+h;
	printf("Total amount present is %d",total);
}
