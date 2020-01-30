#include<stdio.h>
main()
{
	int a,i;
	scanf("%d",&a);
	i=2;
	while(i<=a)
	{
	    if(a%i!=0)
	    {
		    printf("Its A Prime No.");
		    break;
	        i++;
		}
		else
		{
			printf("Its Not A Prime No.");
			break;
	    }
	}
}
