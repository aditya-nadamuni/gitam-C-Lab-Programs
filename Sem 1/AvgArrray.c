#include<stdio.h>
main()
{
	int a[5],i,avg=0,s;
	printf("Enter 5 elements ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	avg=s/5;
	for(i=0;i<5;i++)
	{
		if(a[i]>avg)
		{
			printf("\n %d",a[i]);
		}
	}
}
