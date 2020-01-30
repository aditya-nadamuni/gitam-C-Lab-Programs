#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n;
	printf("Enter No. Of R & C");	
	scanf("%d %d",&m,&n);
	printf("Enter The Values");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Entered Matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
