#include<stdio.h>
main()
{
	int a,b;
	printf("Enter The Product Code");
	scanf("%d",&a);
	b=a%10;
	if(b==0||b==2||b==4||b==6||b==8)
	{
		printf("Put In Red Bag");
	}
	else
	{
		printf("Put In Green Bag");
	}
}
