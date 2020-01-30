#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m,c=0,s=1;
	int b[100][3];
	printf("Enter no. of rows & columns");
	scanf("%d %d",&m,&n);
	printf("Enter Elements");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
	    {
		    if(a[i][j]!=0)
		    {
	            c++;
	        }
	    }
	}
	b[0][0]=m;
	b[0][1]=n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
				b[s][0]=i+1;
				b[s][1]=j+1;
				b[s][2]=a[i][j];
				s++;
			}
		}
	}
	b[0][2]=s-1;
	for(i=0;i<s;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        printf("%d",b[i][j]);
        }
            printf("\n");
    }
}
