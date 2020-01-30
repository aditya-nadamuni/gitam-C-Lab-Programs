#include<stdio.h>
main()
{
	int a[5],i;
	printf("Enter 5 No.s");
	for(i=0;i<5;i++)
	{
		printf("\nEnter No. %d  ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nArray Elemets Are");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
