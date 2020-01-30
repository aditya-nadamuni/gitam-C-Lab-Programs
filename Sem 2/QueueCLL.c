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
		printf("Exit(4)\n");
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
			case 4:exit(1);
			break;
			default:printf("Enter A Valid Operation");
		}
	}
}
void insert (int x)
{
	struct node *tmp;
	tmp=malloc(sizeof(struct node));
	tmp->data=x;
	tmp->next=NULL;
	if(rear==NULL)
	{
		rear=tmp;
		tmp->next=tmp;
	}
	else
	{
	    tmp->next=rear->next;
	    rear->next=tmp;
	    rear = tmp;
    }
}
void del()
{
	struct node *q;
	q=rear->next;
	rear->next=q->next;
	free(q);
}
void display()
{
	struct node *q;
	q=rear->next;
	while(q!=rear)
	{
		printf("\n%d\n",q->data);
		q=q->next;
	}
	printf("%d",q->data);
}

