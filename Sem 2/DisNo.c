#include<stdio.h>
main()
{
	int n[5],d,c,i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
	{
		c=0;
		for(j=0;j<5;j++)
		{
			if(i!=j)
			{
				if(n[i]==n[j])
				{
					c++;
				}
			}
		}
		if(c==0)
		{
			d++;
		}	
	}
	printf("No.Of Distinct Numbs Are %d",d);
}
