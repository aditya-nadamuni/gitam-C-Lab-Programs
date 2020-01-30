#include<stdio.h>
void swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d,y=%d",x,y);
}
main()
{
	void swap(int,int);
    int a,b,c;
    printf("entre a,b");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
