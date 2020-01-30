#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int x);
void del();
void display();
main()
{
	int ch,x;
	while(1)
	{
		printf("\nEnter An Operation\n");
		printf("Create(1)\n");
		printf("Delete(2)\n");
		printf("Display(3)\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{printf("Enter An Elment\n");
			       scanf("%d",&x);
			       insert(x);
			       break;}
			case 2:del();
			       break;
			case 3:display();
			       break;
			default:printf("Enter A Valid Operation");
		}
	}
}
void insert (int x)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	tmp->next=NULL;
	if(front==NULL)
	{
		front=tmp;
		rear=tmp;
	}
	else
	{
		rear->next=tmp;
		rear=tmp;
	}
}
void del()		
{
	struct node *q;
	q=front;
	front=q->next;
	free(q);
}
void display()
{
	struct node *q;
	q=front;
	while(q->next!=NULL)
	{
		printf("\n%d\n",q->data);
		q=q->next;
	}
	printf("%d",q->data);
}

