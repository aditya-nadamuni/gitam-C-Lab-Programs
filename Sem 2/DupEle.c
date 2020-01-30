#include<stdio.h>
main()
{
	int n[5],i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("Duplicate Elements Are :");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
	    {
		    if(n[i]==n[j])
		    {
		    	printf("%d\n",n[i]);
		    }
		}
	}
}
