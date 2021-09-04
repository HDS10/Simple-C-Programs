//function to calculate factoral of a no

#include<stdio.h>

int facto(int);

int main()
{
	int a,b;
	printf("enter any no");
	scanf("%d",&a);
	b=facto(a);
	printf("the factoral of %d is %d",a,b);
}
int facto(int a)
{
	int f=1,i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}
