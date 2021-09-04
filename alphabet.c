//to check whther a char is alphabet or not

#include<stdio.h>

 main()
{
	char a;
	printf("enter any character");
	scanf("%c",&a);
	if((a>='a' && a<='z')||(a>='A' && a<='Z'))
	printf("the character %c is a alphabet",a);
	else
	printf("the character %c is not a alphabet",a);
	
}
