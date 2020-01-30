#include<stdio.h>
main()
{
	char o;
	int a,b;
	scanf("%d %d %c",&a,&b,&o);
	switch(o)
	{
		case '+':printf("Add=%d\n",a+b);break;
		case '-':printf("Sub=%d\n",a-b);break;
		case '*':printf("Mult=%d\n",a*b);break;
		case '%':printf("Mod=%d\n",a%b);break;
		case '/':printf("Div=%d\n",a/b);break;				
		default:printf("Invalid\n");
	}
	
}
