#include<stdio.h>
main()
{
	int a;
	printf("Enter Your Age =");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("You Are Eligible To Vote");
	}
	else
	{
		printf("Not Eligible");
	}
}
