//to find reverse of a number

#include<stdio.h>

int main()
{
	int r=0,a;
	printf("enter any number");
	scanf("%d",&a);
	while(a!=0)
	{
		r=r*10;
		r=r+a%10;
		a=a/10;
	}
	printf("the reverse of entered no is %d",r);
}
