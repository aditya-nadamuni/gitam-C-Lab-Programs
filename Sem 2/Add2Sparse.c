#include<stdio.h>
int a[10][10],b[10][10],b1[][3],b2[][3],b3[][3];
int m,n,i,j,k;
void read();
void convert(int a[10][10],int b[][3]);
void add();
void display();
int main()
{
	read();
	convert(a,b1);
	convert(b,b2);
	add();
	display();
}
void read()
{
    printf("enter the values for m & n");
    scanf("%d %d",&m,&n);
    printf("enter values of matrices A");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of matrice B");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
}
void convert(int a[10][10],int b[][3])
{
	int c,s;
	s=1;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c++;
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
}
void add()
{
	int t1,t2,i,j,k;
	t1=b1[0][2];
	t2=b2[0][2];
	if(b1[0][0]!=b2[0][0]||b1[0][1]!=b2[0][1])
	{
		printf("Addition is not possible");
	}
	i=j=k=1;
	while(i<=t1&&j<t2)
	{
		if(b1[i][0]<b2[j][0])
		{
			b3[k][0]=b1[i][0];
			b3[k][1]=b1[i][1];
			b3[k][2]=b1[i][2];
			i++;k++;
		}
	    else if(b2[j][0]<b1[i][0])
	    {
		    b3[k][0]=b2[j][0];
		    b3[k][1]=b2[j][1];
		    b3[k][2]=b2[j][2];
		    j++;k++;
	    }
	    else if(b1[i][1]<b2[j][1])
	    {
		    b3[k][0]=b1[i][0];
		    b3[k][1]=b1[i][1];
		    b3[k][2]=b1[i][2];
		    i++;k++;
	    }
	    else if(b2[j][1]<b1[i][1])
	    {
	    	b3[k][0]=b2[j][0];
	    	b3[k][1]=b2[j][1];
	    	b3[k][2]=b2[j][2];
	    	j++;k++;
		}
		else
		{
			b3[k][0]=b1[i][0];
			b3[k][1]=b1[i][1];
			b3[k][2]=b1[i][2]+b2[j][2];
			i++;j++;k++;
		}
	}
	while(i<=t1)
	{
		b3[k][0]=b1[i][0];
		b3[k][1]=b1[i][1];
		b3[k][2]=b1[i][2];
		i++;k++;
	}
	while(j<=t2)
	{
		b3[k][0]=b2[j][0];
		b3[k][1]=b2[j][1];
		b3[k][2]=b2[j][2];
		j++;k++;
	}
	b3[0][0]=b1[0][0];
	b3[0][1]=b1[0][1];
	b3[0][2]=k-1;
}
void display()
{
	int i,j,s;
	s=b3[0][2];
	for(i=0;i<s-1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
	}
}
