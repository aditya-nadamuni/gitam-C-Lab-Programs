#include<stdio.h>
main()
{
	int i,a,n,even=0,odd=0,zero=0;
	printf("How Many No.s");
	scanf("%d",&n);
	i=1;
	do
	{
		scanf("%d",&a);
		if(a==0) 
		{
			zero=zero+1;
		}
		else if(a%2==0)
		{
			even=even+1;
		}
		else if(a%2!=0)
		{
			odd=odd+1;
		}
		
		i++;
	}
	while(i<=n);
	printf("Even =%d Odd =%d Zeros =%d   ",even,odd,zero);
}
