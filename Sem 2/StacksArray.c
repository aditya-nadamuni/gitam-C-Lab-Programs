#include<stdio.h>
#include<stdlib.h>
#define max 10
int a[max];
int top=-1;
void push(int x);
void pop();
void display();
main()
{
	int x,ch;
	while(1)
	{
		printf("\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter Your Choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter Element\n");
			       scanf("%d",&x);
			       push(x);
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:exit(1);
			default:printf("\nEnter A Valid Option\n");
		}
		
	}
}
void push(int x)
{
	if(top==max-1)
	{
		printf("Stack Is Full");
	}
	else
	{
		top++;
		a[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack Is Empty");
	}
	else
	{
		printf("%d",a[top]);
		top--;
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	printf("End Of Stack");
}
