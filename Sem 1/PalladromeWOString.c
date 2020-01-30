#include<stdio.h>
#include<string.h>
void main()
{
	char s[10];
	int i,f=0,n;
	gets(s);
	n=strlen(s)-1;
	for(i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i])
		{
			f=1;
			break;
		}
    }
    if(f==0)
    {
    	printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
