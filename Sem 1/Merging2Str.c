#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,j;
	scanf("%s",a);
	printf("\nFor 2nd");
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
	}
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	printf("%s",a);
	
}
