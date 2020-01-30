#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k;
	printf("Enter The Values For A \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The Values For B \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    c[i][j]=0;
    }
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	printf("Entered Values For A \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("Entered Values For B \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	printf("The Multiplicated Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
}
