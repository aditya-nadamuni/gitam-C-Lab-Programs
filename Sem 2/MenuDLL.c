#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
}*start=NULL;
int i;
void create(int x);
void insbeg(int x);
void insafter(int p,int x);
void delbeg();
void delend();
void del(int x);
void display();
int count();
void rev();
void main()
{
	int ch;
	while(1)
	{
		printf("1.Create\n");
		printf("2.Insert At Begining\n");
		printf("3.Insert At Position\n");
		printf("4.Delete At Begining\n");
		printf("5.Delete At End\n");
		printf("6.Delete An Element\n");
		printf("7.Display\n");
		printf("8.Count\n");
		printf("9.Quit\n");
		printf("Enter A Operation\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:{
			    int x;
			    printf("\nEnter An Element\n");
			    scanf("%d",&x);
			    create(x);
			    break;
			}
			case 2:{
				int x;
				printf("Enter An Element\n");
				scanf("%d",&x);
				insbeg(x);
				break;
			}
			case 3:{
				int x,p;
				printf("Enter Element & Position\n");
				scanf("%d %d",&x,&p);
				insafter(x,p);
				break;
			}
			case 4:{
				delbeg();
				break;
			}
			case 5:{
				delend();
				break;
			}
			case 6:{
				int x;
				printf("Enter An Element\n");
				scanf("%d",&x);
				del(x);
				break;
			}
			case 7:{
				display();
				break;
			}
			case 8:{
				int y;
				y=count();
				printf("%d",y);
				break;
			}
			case 9:exit(1);
			case 10:rev();
			break;
			default:{
				printf("\nEnter A Valid Option\n");
			}
		}
	}
}
void create(int x)
{
	struct node *tmp,*q;
	q=start;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x ;
	if(start==NULL)
	{
		tmp->prev=NULL;
	    tmp->next=NULL;
		start=tmp;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		tmp->prev=q;
		tmp->next=NULL;
		q->next=tmp;
	}
}
void insbeg(int x)
{
	struct node *tmp,*q;
	q=start;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	tmp->prev=NULL;
	tmp->next=q;
	q->prev=tmp;
	start=tmp;	
}
void insafter(int x,int pos)
{
	struct node *tmp,*r,*q;
	int i;
	q=start;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	for(i=1;i<pos;i++)
	{
		q=q->next;
	}
	tmp->next=q->next;
	r=q->next;
	q->next=tmp;
	tmp->prev=q;
	r->prev=tmp;
}
void delbeg()
{
	struct node *r,*q;
	q=start;
	r=q->next;
	start=r;
	free(q);
}
void delend()
{
	struct node *r,*q;
	q=start;
	while(q->next!=NULL)
	{
		q=q->next;
	}
	q->prev->next=NULL;
	free(q);
}
void del(int x)
{
	struct node *q;
	q=start;
	while(q->next!=NULL)
	{
		if(q->data==x)
		break;
		q=q->next;
	}
	q->prev->next=q->next;
	q->next->prev=q->prev;
	free(q);
} 
void display()
{
	struct node *q;
	q=start;
	while(q->next!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	printf("%d\n",q->data);
}
int count()
{
	struct node *q;
	int c;
	c=0;
	q=start;
	while(q->next!=NULL)
	{
		c++;
		q=q->next;
	}
	return c+1;
}
void rev()
{
	struct node *t,*r;
	while(start->next!=NULL)
	{
		t=start->next;
		r=start->prev;
		start->next=r;
		start->prev=t;
		start=t;
	}
	t=start->prev;
	start->next=t;
	start->prev=NULL;
}
