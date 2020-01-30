/*To Perform Bitwise Ops*/
#include<stdio.h>
main()
{
	int a,b;
	scanf("Enter A and B%d",&a,&b);
	printf("And Op=%d",a&b);
	printf("\n Or Op=%d",a|b);
    printf("\n Not Op Of A=%d",!a);
	printf("\n ex-or Op=%d",a^b);
	printf("\n left shift Op=%d",a<<b);
	printf("\n right shift Op=%d",a>>b);
}
