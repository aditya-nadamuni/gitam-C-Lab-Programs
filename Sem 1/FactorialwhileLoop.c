#include<stdio.h>
main()
{
	int s,a,i,b;
	printf("Enter a No.");	
	scanf("%d",&a);
	s=1;
	i=1;
	while(i<=a)
	{
		s=s*i;
		i++;
	}
	printf("%d",s);	
}
