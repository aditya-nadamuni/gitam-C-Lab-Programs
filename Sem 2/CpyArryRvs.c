#include<stdio.h>
main()
{
	int l[10],c[10],i,j;
	printf("Enter 10 Elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&l[i]);
	}
	for(i=0,j=9;i<10,j>-1;i++,j--)
	{
		c[j]=l[i];
    }
	for(i=0;i<10;i++)
	{
		printf("%d\n",c[i]);
	}
}
