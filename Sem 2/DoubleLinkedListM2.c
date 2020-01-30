#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*start=NULL,*n=NULL,*temp=NULL;
int c=0;
void create()
{
	int i,x;
	printf("Enter the number of nodes:");
	scanf("%d",&x);
	printf("Enter the elements:\n");
	for(i=1;i<=x;i++)
	{
		n=malloc(sizeof(struct node));
		scanf("%d",&n->data);
		n->prev=NULL;
		n->next=NULL;
		if(start==NULL)
		start=n;
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=n;
			n->prev=temp;
		}
	}
}
void display()
{
	if(start==NULL)
	printf("The list is empty\n");
	else
	{
		temp=start;
		printf("The list is:\n");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
		temp=temp->next;
		}
	}
	printf("\n");
}
void insertatend()
{
	printf("Enter the element to be inserted:");
	n=malloc(sizeof(struct node));
		scanf("%d",&n->data);
		n->prev=NULL;
		n->next=NULL;
		temp=start;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=n;
		n->prev=temp; 
}
void deleteatend()
{
	struct node *p,*last;
	last=start;
	while(last->next!=NULL)
	last=last->next;
	p=last->prev;
	p->next=NULL;
	free(last);
}
void deleteatbeg()
{
	temp=start;
	start=start->next;
	start->prev=NULL;
	free(temp);
}
void insertatbeg()
{
	printf("Enter the element to be inserted:");
	n=malloc(sizeof(struct node));
		scanf("%d",&n->data);
		n->prev=NULL;
		n->next=start;
		start->prev=n;
		start=n;
}
void search()
{
	int x,flag=0;
	printf("Enter the element to be searched:");
	scanf("%d",&x);
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			printf("The element is found\n");
			flag=1;break;
		}
		else
		temp=temp->next;
	}
	if(flag==0)
	printf("\nThe element is not found");
}
void count()
{
	temp=start;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
	printf("The number of nodes is: %d\n",c);
}
void insertafter()
{
	int x,a,i;
	printf("Enter the element to be inserted:");
	scanf("%d",&x);
	printf("Enter the position:");
	scanf("%d",&a);
	int flag=0;
	struct node *p;
	n=malloc(sizeof(struct node));
	n->data=x;
	n->prev=NULL;
	n->next=NULL;
	temp=start;
	while(temp!=NULL)
	{
		if(temp->data==a)
		{
			n->next=temp->next;
			n->prev=temp;
			if(temp->next!=NULL)
			{
			temp->next->prev=n;
			temp->next=n;
			flag=1;break;
		   } 
		}
		else
		temp=temp->next;
	    }
	if(flag==0)
	printf("The given position not found");
}
 
main()
{
	int choice;
	while(1)
	{
		printf("1.Create\n2.Display\n3.Insert at beginning\n4.Insert at end\n5.Delete at beginning\n6.Delete at end\n7.Search\n8.Count\n9.Exit\n10.insert after\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();break;
			case 2:display();break;
			case 3:insertatbeg();break;
			case 4:insertatend();break;
			case 5:deleteatbeg();break;
			case 6:deleteatend();break;
			case 7:search();break;
			case 8:count();break;
			case 9:exit(0);
			case 10:insertafter();break;
			default:printf("Wrong choice");
		}
	}
}


