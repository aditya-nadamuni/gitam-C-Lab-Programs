#include<stdio.h>
main()
{
	int basic,BA,HRA,PF,NS;
	basic=24000;
	BA=(10*basic)/100;
	HRA=(7*basic)/100;
	PF=1200;
	NS=basic+BA+HRA-PF;
	printf("Net Salary =%d",NS);
}
