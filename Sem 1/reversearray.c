#include<stdio.h>
main()
{
	int a[3],i;
	printf("Enter 3 No.s  ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Arrays In reverse Order");
	for(i=2;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}
