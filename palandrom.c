//to check if the no is parandom


#include<stdio.h>

int main()
{
	int r=0,a,b;
	printf("enter any number");
	scanf("%d",&a);
	b=a;
	while(a!=0)
	{
		r=r*10;
		r=r+a%10;
		a=a/10;
	}
	if(b==r)
	printf("the no is palandrom");
	else
	printf("the no is not a palandrom");
}
