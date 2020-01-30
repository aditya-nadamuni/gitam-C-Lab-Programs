#include<stdio.h>
#include<string.h>
void main()
{
	char a[5],b[5];
	int i,j;
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not A Palindrome");
	}      
}
