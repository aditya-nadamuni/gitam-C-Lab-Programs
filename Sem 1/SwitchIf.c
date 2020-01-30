#include<stdio.h>
main()
{
	int a,b;
	char sy;
	scanf ("%d %d %c",&a,&b,&sy);
	switch (sy)
	{
		case '>':if(a>b)
		         {
		         	printf("a is max");
				 }
				 else
				 {
				 	printf("b is max");
				 }
				 break;
		case '<':if (a<b)		 
		        {
		         	printf("a is min");
				 }
				 else
				 {
				 	printf("b is min");
				 }
				 break;
		case '=':if(a==b)		 
		        {
		        	printf("Equal");
				}
				else
				{
					printf("Not Equal");
				}
	}
}
