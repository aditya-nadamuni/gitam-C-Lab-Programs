// Program To Implement Binary Search
#include<stdio.h>
main()
{
	int key,check,i,n,a[10];
	printf("Enter No. Of Elements\n");
	scanf("%d",&n);
	printf("Enter Elements");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
    }
    printf("Enter The Element To Be Searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			check++;
			break;
		}
	}
	if(check!=0)
	{
		printf("Element Found\n");
	}
	else
	{
		printf("Element Not Found\n");
	}
}
