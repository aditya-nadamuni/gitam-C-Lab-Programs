#include<stdio.h>
main()
{
	int s1,s2,s3;
	printf("enter s1,s2,s3");
	scanf("%d%d%d",&s1,&s2,&s3);
	if((s1==s2==s3)&&(s1+s2>s3))
	printf("\n forms a triangle and equilateral");
    else if((s1==s2)&&(s1+s2>s3))
	printf(" \n forms a triangle and isocles");
	else
	printf("\n  forms an scalen triangle");
}
