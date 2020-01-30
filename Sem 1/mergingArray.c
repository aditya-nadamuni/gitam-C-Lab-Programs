#include<stdio.h>
void main()
{
	int a[10],b[10],i,j,n;
	printf("Enter No. Of Arrays");	
	scanf("%d",&n);
	if(n<10)
    {	
	    printf("Enter Values For Array 1 \n");
	    for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
	    printf("Enter Values For Array 2 \n");
	    for(i=0;i<n;i++)
	    {
		    scanf("%d",&b[i]);
	    }
	    for(i=n;i<2*n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
		        a[i]=b[j];
		        i++;
	        }
        }
	    printf("Array After Merging\n");
	    for(j=0;j<i-1;j++)
	    {
		    printf("%d\t",a[j]);
	    }
    }
    else
    {
	    printf("Exceeds Max. Limit");
    }	
}
