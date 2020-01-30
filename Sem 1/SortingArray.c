#include<stdio.h>
void main()
{
	int a[10],n=0,i,j,t;
	printf("Enter The No. Of Arrays");
	scanf("%d",&n);
	printf("Enter The Values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			    t=a[j];
			    a[j]=a[j+1];
			    a[j+1]=t;
			}
		}
	}
	printf("Arrays After Sorting");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
