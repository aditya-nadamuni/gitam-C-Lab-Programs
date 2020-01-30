#include<stdio.h>
main()
{
	int a[10],i;
	printf("Enter 10 Elements");
	for(i=9;i>-1;i--)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
}
