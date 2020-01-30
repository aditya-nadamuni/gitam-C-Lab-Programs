#include<stdio.h>
main()
{
	char ap;
	printf("enter a variable ");
	scanf("%c",&ap);
	switch(ap)
	{
		case 'a':printf("vowel");break;
		case 'e':printf("vowel");break;
		case 'i':printf("vowel");break;
		case 'o':printf("vowel");break;
		case 'u':printf("vowel");break;
		default:printf("consonant");
	}
}
