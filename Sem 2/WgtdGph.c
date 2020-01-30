#include<stdio.h>
#include<stdlib.h>

void main()
{
	int adj[20][20];
	int n,m,i,j,s,d,w;
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
				printf("Enter Weight\n");
				scanf("%d",&w);
				adj[s][d]=w;
				adj[d][s]=w;
			}
			if(g=='d')
			{
				printf("Enter Weight\n");
				scanf("%d",&w);
				adj[s][d]=w;
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

