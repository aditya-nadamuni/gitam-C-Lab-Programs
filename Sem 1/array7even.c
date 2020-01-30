#include<stdio.h>
main()
{
	int a[7],i;
	printf("Enter 7 No.s");
	for(i=0;i<7;i++)
	{
		printf("Enter No. %d ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Even No.s Of The Array");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d ",a[i]);
		}
	}
}
