#include<stdio.h>
void main()
{
	char s1[5];
	char s2[5];
	int i;
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
	}
	s2[i]='\0';
	printf("%s",s2);
}
