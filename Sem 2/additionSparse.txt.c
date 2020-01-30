#include<stdio.h>
void add(int a[][3],int b[][3]);
int main()
{
	int a[20][3],b[20][3];
	int i,j;
	int m,n,p,q;
	printf("enter the size of matrix");
	scanf("%d%d",&m,&n);
	printf("Enter the number of nonzero elements in a");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		scanf("%d%d%d",&a[i+1][0],&a[i+1][1],&a[i+1][2]);
	}
	printf("Enter the number of nonzero elements in b");
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d%d%d",&b[i+1][0],&b[i+1][1],&b[i+1][2]);
	}
	a[0][0]=2,a[0][1]=2,a[0][2]=p;/*
	for(i=0;i<=p;i++)
	{
	
	for(j=0;j<3;j++)
	{
		printf("%d  ",a[i][j]);
	}
	printf("\n");
	}
	b[0][0]=2,b[0][1]=2,b[0][2]=q;
	for(i=0;i<=q;i++)
	{
	
	for(j=0;j<3;j++)
	{
		printf("%d  ",b[i][j]);
	}
	printf("\n");
	}*/
	
	add(a,b);
	return 0;
}
void add(int a[][3],int b[][3])
{
	int c[20][3];
	c[0][0]=2;
	c[0][1]=2;
	int i,j,k;
	int t1,t2;
	i=j=k=1;
	t1=a[0][2];
	t2=b[0][2];
	while(i<=t1 && j<=t2)
	{
		if(a[i][0]<b[j][0])
		{
			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			i++;k++;
			
		}
		else if(b[j][0]<a[i][0])
		{
		c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=b[j][2];
			j++;k++;	
		}
		else if(a[i][1]<b[j][1])
		{
			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			i++;k++;
			
		}
		else if(b[j][1]<a[i][1])
		{
		c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=b[j][2];
			j++;k++;	
		}
		else
		{
			c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=a[i][2]+b[j][2];
			j++;k++;i++;
		}
		}
	while(i<=t1)
	{
		c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2];
			i++;k++;
	}
	while(j<=t2)
	{
		c[k][0]=b[j][0];
			c[k][1]=b[j][1];
			c[k][2]=b[j][2];
			j++;k++;	
	}
	c[0][2]=k-1;
	printf("result is\n");
	for(i=0;i<k;i++)
	{
	
	for(j=0;j<3;j++)
	{
		printf("%d  ",c[i][j]);
	}	
	printf("\n");
	}
} 