#include<stdio.h>
int adj[20][20];
int visited[20];
int n;
void adjmatrix(int n);
void dfs(int n);
main()
{
	int i,v;
	printf("Enter The No. Of Vertices\n");
	scanf("%d",&n);
	adjmatrix(n);
	printf("Enter The Starting Vertex\n");
	scanf("%d",&v);
	dfs(v);
}
void dfs(int v)
{
	int stk[20];
	int i;
	int top=-1,x,t;
	while(top>=0)
	{
		x=stk[top];
		top--;
		if(visited[x]==0)
		{
			printf("%d",x);
			visited[x]=1;
		}
		else
		{
			continue;
		}
		for(i=n;i>=1;i--)
		{
			if(adj[x][i]==1&&visited[i]==0)
			{
				top++;
				stk[top]=i;
			}
		}
	}
}
void adjmatrix(int n)
{
	int m,i,j,s,d;
	char g;
	printf("Enter The Type Of Graph\n");
	scanf(" %c",&g);
	if(g=='u')
	{
		m=(n*(n-1))/2;
	}
	if(g=='d')
	{
		m=(n*(n-1));
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			adj[i][j]=0;
		}	
	}
	printf("\nEnter 0 0 To Quit\n");
	for(i=0;i<=m;i++)
	{
		printf("Enter Edge Information\n");
		scanf("%d %d",&s,&d);
		if(s==0&&s==d)
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
	for(i=1;i<n;i++)
	{
		for(i=1;i<n;i++)
		{
			for(j=1;j<n;j++)
			{
				printf("%3d",adj[i][j]);
			}
			printf("\n");
		}
	}
}
