#include<stdio.h>
main()
{
	int a[5],i,key,f=0;
	printf("Enter 5 Elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Key Element");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(a[i]==key)
		{
			f=1;
			break;
		}
		
	}
	if(f==1)
	{
		printf("Element is Found");
	}
	else
	{
		printf("Element Not Found");
	}
}
