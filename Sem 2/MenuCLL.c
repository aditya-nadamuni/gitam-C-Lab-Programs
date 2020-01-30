#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*last=NULL;
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
		printf("8.Quit\n");
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
			case 7:
				display();
				break;
			case 8:exit(1);
			default:{
				printf("\nEnter A Valid Option\n");
			}
		}
	}
}
void create(int x)
{
	struct node *tmp,*q;
	q=last;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x ;

	if(last==NULL)
	{
		tmp->next=tmp;
		last=tmp;
	}
	else
	{
		tmp->next=last->next;
		last->next=tmp;
		last=tmp;
	}
}
void insbeg(int x)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	tmp->next=last->next;
	last->next=tmp;	
}
void insafter(int x,int pos)
{
	struct node *tmp,*q;
	int i;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=x;
	q=last->next;
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
	q=last->next;
	last->next=q->next;
	free(q);
}
void delend()
{
	struct node *r,*q;
	q=last->next;
	while(q!=last)
	{
		r=q;
		q=q->next;
	}
	r->next=last->next;
	free(q);
	last=r;
}
void del(int x)
{
	struct node *r,*q;
	q=last->next;
	while(q->data!=x)
	{
		r=q;
		q=q->next;
	}
	r->next=q->next;
	free(q);
} 
void display()
{
	struct node *q;
	q=last->next;
	while(q!=last)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	printf("%d\n",q->data);
}
