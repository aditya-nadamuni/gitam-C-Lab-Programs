#include<stdio.h>
#include<string.h>
char stk[20];
int top =-1;
void push(char x);
char pop();
main()
{
	int i;
	char s[20];
	printf("Enter a String");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		push(s[i]);
	}
	for(i=0;i<strlen(s);i++) 
	{
		s[i]=pop();
	}
	printf("String Reversal Is %s",s);
}
void push(char x)
{
	if(top==19)
	{
		printf("Stack Is Full");
	}
	else
	{
		top++;
		stk[top]=x;
	}
}
char pop()
{
	char c;
	c=stk[top];
	top--;
	return c;
}
