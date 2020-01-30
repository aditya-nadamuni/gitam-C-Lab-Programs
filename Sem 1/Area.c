/*Area Of Triangle*/
#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c,s,A;
	printf("enter the values a,b,c = ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    printf("enter the values of a,b,c,s");
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle with 3 sides %d",A);	
    return 0;
}
