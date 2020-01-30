#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*top=NULL;
void push(int x);
void pop();
void display();
main()
{
	int ch,x;
	while(1)
	{
		printf("\n1.Push\n");
		printf("2.Pop\n");
		printf("3.Display\n");
		printf("4.Exit\n");
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
	struct node *tmp,*q;
	q=top;
	tmp=malloc(sizeof(struct node));
	tmp->data =x;
	if(q==NULL)
	{
		tmp->next=NULL;
		top=tmp;
	}
	else
	{
		tmp->next=top;
		top=tmp;
	}
}
void pop()
{
	struct node *q;
	if(top==NULL)
	{
		printf("\nStack Is Under Flown\n");
		return ;
	}
	else
	{
	q=top;
	top=q->next;
	printf("%d Is Poped From The Stack\n",q);
	free(q);
    }
}
void display()
{
	struct node *q;
	q=top;
	while(q->next!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	printf("%d",q->data);
}   
