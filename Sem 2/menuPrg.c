/*Menu Based Various Array Ops*/
#include<stdio.h>
int a[20],n,i;
void input();
void insert();
void del();
void search();
void reverse();
main()
{
	int o;
	do
	{
		printf("\nEnter An Option\n");
		printf("1.Input\n");
		printf("2.Insert\n");
		printf("3.Delete\n");
		printf("4.Search\n");
		printf("5.Reverse\n");
		printf("6.Display\n");
		printf("7.Exit\n");
		scanf("%d",&o);
		switch(o)
		{
			case 1:input();
			break;
			case 2:insert();
			break;
			case 3:del();
			break;
			case 4:search();
			break;
			case 5:reverse();
			break;
			case 7:exit(0);
			break;
			case 6:for(i=0;i<n;i++)
	                {
		                printf("%d\n",a[i]);
	                }
		}
	}
	while(o<7);
}
void input()
{
	printf("Enter No. Of Elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void search()
{
	int key,check=0;
	printf("Enter Element To Be Searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			check++;
			break;
		}
	}
	if(check!=0)
	{
		printf("Element Found\n");
	}
	else
	{
		printf("Element Not Found\n");
	}
}
void insert()
{
	int p,item;
	printf("Enter The \nPosition");
	scanf("%d",&p);
	printf("Enter The \nElement To Be Inserted");
	scanf("%d",&item);
	if(p<n)
	{
		while(i>=p-1)
		{
			a[i+1]=a[i];
			i--;
		}
		a[p-1]=item;
		n++;
	}
}
void del()
{
	int pos;
	printf("Enter The Position That Has To Be Deleted\n");
	scanf("%d",&pos);
	i=pos-1;
	while(i<n-1)
	{
		a[i]=a[i+1];
		i++;
	}
	n--;
}
void reverse()
{
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
