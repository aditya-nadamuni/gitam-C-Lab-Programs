#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
	printf("Enter No. Of R & C");	
	scanf("%d %d",&m,&n);
	printf("Enter The Values For A \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The Values For B \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The Sum Matrix \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
}
