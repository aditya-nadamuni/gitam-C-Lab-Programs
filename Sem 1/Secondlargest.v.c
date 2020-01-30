#includeL<stdio.h>
main()
{
	int a,b=0,n,i,c;
	printf("Enter No. Of Digits");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter The No.");
		scanf("%d",&a);
		if(a>b)
		{
			b=a;
		}
	}
	printf("Second Largest No.%d",b);
}
