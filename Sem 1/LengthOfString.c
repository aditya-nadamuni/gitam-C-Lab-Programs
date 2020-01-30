#include<stdio.h>
void main()
{
	char a[5];
	int i,n=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	printf("%d",n);
}
