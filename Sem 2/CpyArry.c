#include<stdio.h>
main()
{
	int l[10],c[10],i;
	printf("Enter 10 Elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&l[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=l[i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",c[i]);
	}
}
