#include<stdio.h>
#include<stdlib.h>

void main()
{
	int adj[20][20];
	int n,m,i,j,s,d;
	char g;
	
	printf("Enter No. Of Nodes");
	scanf("%d",&n);
	printf("Enter Type Of Graph\n");
	scanf(" %c",&g);
	if(g=='u')
	{
		m=(n*(n-1))/2;
	}
	if(g=='d')
	{
		m=(n*(n-1));
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			adj[i][j]=0;
		}
	}
	printf("\nEnter 0,0 To Quit\n");
	for(i=1;i<=m;i++)
	{
		printf(" Enter Edge Info");
		scanf("%d %d",&s,&d);
		if(s==0&&d==0)
		{
			break;
		}
		else
		{
			if(g=='u')
			{
				adj[s][d]=1;
				adj[d][s]=1;
			}
			if(g=='d')
			{
				adj[s][d]=1;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d",adj[i][j]);
		}
		printf("\n");
	}
	
}
