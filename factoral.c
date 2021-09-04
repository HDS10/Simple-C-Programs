//to find the factoral of a number

#include<stdio.h>

int main()
{
	int c=0,f=1,n;
	printf("enter any number");
	scanf("%d",&n);
	while(c<n)
	{
		c++;
		f=f*c;
	}
	printf("the factoral of %d is %d",n,f);
	}
