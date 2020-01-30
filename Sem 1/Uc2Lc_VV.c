#include<stdio.h>
main()
{
	char ch,op;
	ch=getchar();
	if(ch>96&&ch<123)
	{
		op=ch-32;
		putchar(op);
	}
	else if(ch>64&&ch<91)
	{
		op=ch+32;
		putchar(op);
	}
}
