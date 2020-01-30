#include<stdio.h>
main()
{
	int a,b,c,d,e,i;
	printf("Enter a No.");
	scanf("%d",&a);
	b=a/100;
	c=a%100;
	d=c/10;
	e=c%10;
	printf("%d %d %d",b,d,e);
	for (i=1;i<=3;i++)
	{
		switch(i)
		{
			case 1:printf("One");break;
			case 2:printf("Two");break;
			case 3:printf("Three");break;
			case 4:printf("Four");break;
			case 5:printf("Five");
		}
	}
}
