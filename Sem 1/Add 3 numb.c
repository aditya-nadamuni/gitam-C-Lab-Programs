/*Sum Of The 3 Digits In Given Number*/
#include<stdio.h>
main()
{
	int n,s,r;
	n=555;
	s=0;
	r=n%10;
	s=s+r;
	n=n/10;
	r=n%10;
	s=s+r;
	n=n/10;
	r=n%10;
	s=s+r;
	n=n/10;
	printf("sum of the 3 digits of given number =%d",s);
}
