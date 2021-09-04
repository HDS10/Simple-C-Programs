//to display the fib series till n term

#include<stdio.h>

int main()
{
	int a=0,b=1,c=0,cot=2,n;
	printf("erter the value of n");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	while(cot<=n)
	{
		c=a+b;
		a=b;
		b=c;
		cot++;
		printf("%d\n",c);
	}
		
}
