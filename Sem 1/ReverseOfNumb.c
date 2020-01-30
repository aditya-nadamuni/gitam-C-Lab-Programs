#include<stdio.h>
int rev(int x)
{
  int r,rs=0;
  while(x>0)
  {
  	r=x%10;
  	rs=rs*10+r;
  	x=x/10;
  }
  return rs;
}
main()
{
	int rev(int x);
	int n,z;
	printf("enter n");
	scanf("%d",&n);
	z=rev(n);
	printf("reverse=%d",z);
}
