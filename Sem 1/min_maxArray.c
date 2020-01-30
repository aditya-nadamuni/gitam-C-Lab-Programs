#include<stdio.h>
main()
{
	int a[4],max=0,min,i;
	printf("enter 4 elements");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Min = %d & Max = %d",min,max);
}
