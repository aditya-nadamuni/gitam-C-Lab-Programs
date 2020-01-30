#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*start=NULL;
int i;
void create(int x);
void insbeg(int x);
void insafter(int p,int x);
void delbeg();
void delend();
void del(int x);
void display();
void count();
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
				count();
				break;
			}
			case 9:exit(1);
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
	tmp->next=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=tmp;
	}
}
void insbeg(int x)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	tmp->next=start;
	start=tmp;	
}
void insafter(int x,int pos)
{
	struct node *tmp,*q;
	q=start;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	for(i=1;i<pos;i++)
	{
		q=q->next;
	}
	tmp->next=q->next;
	q->next=tmp;
}
void delbeg()
{
	struct node *q;
	q=start;
	start=q->next;
	free(q);
}
void delend()
{
	struct node *r,*q;
	q=start;
	while(q->next!=NULL)
	{
		r=q;
		q=q->next;
	}
	r->next=NULL;
	free(q);
}
void del(int x)
{
	struct node *r,*q;
	q=start;
	while(q->next!=NULL)
	{
		if(q->data==x)
		break;
		r=q;
		q=q->next;
	}
	r->next=q->next;
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
void count()
{
	struct node *q;
	int c=0;
	q=start;
	while(q->next!=NULL)
	{
		c++;
		q=q->next;
	}
	printf("%d",c+1);
}
