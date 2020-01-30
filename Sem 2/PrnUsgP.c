#include<stdio.h>
struct std
{
	int rno;
	char name[20];
	float cgpa;
};
void main()
{
	struct std s1,s2,*p;
	printf("Details For 1");
	scanf("%d %s %f",&s1.rno,&s1.name,&s1.cgpa);
	printf("Details For 2");
	scanf("%d %s %f",&s2.rno,&s2.name,&s2.cgpa);
	p=&s1;
	printf("%d %s %f\n",p->rno,p->name,p->cgpa);
	p=&s2;
	printf("%d %s %f\n",p->rno,p->name,p->cgpa);
}
