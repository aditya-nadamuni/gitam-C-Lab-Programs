#include<stdio.h>
main()
{
	int a[5],e[5],i,j,k;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			e[j]=a[i];
			j++;
		}
	}
	printf("Enter \n Key");
	scanf("%d",&k);
	printf("Kth Even Element is %d",e[k-1]);
}
