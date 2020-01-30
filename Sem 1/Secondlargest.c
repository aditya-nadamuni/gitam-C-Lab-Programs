#include<stdio.h>
main()
{
	int a=0,b=0,c,n,i;
	printf("Enter No. Of Digits  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter A No.");
		scanf("%d",&a);
		if(a>b)
		{
			c=b;
			b=a;
		}
	}
	printf("Second Largest No.= %d",c);
}
