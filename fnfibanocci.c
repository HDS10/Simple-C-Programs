//function to check if the no belong to fibonacci series or not

#include<stdio.h>

int fibonacci(int);

int main()
{
	int a,b;
	printf("enter any no\n");
	scanf("%d",&b);
	a=fibonacci(b);
	if(a==1)
	printf("the no %d belongs to fibanocci series",b);
	else if(a==0)
	printf("the no %d does not belongs to fibanocci series",b);
}
int fibonacci(int b)
{
	int x=0,y=1,z,i=1;
	while(i>0)
	{
		z=x+y;
		if(x==b)
		{
			return 1;
			break;
		}
		else if(x>b)
		{
			return 0;
			break;
		}
		x=y;
		y=z;
		i++;
	}
}
