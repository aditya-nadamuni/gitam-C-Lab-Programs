#include<stdio.h>
#include<stdlib.h>
#define max 10
int  Q[max];
int rear=-1;
int front=-1;
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
    if((front==0&&rear==max-1)||(rear+1==front))
    {
    	printf("Queue Is Full");
	}
	else
	{
		if(front==-1)
		{
			front=rear=0;
		}
		if(rear==max-1&&front>0)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		Q[rear]=x;
	}
}

void del()
{
	int q;
	if(front==-1&&rear==-1)
	{
		printf("Queue Is Empty");
	}
	else
	{
		printf("Deleting %d",Q[front]);
		if(front==max-1)
		{
			front=0;
		}
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",Q[i]);
	}
}

