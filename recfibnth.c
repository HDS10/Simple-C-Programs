//print nth term of fibonaccis sreies

#include<stdio.h>

int fib(int);

int main()
{
	int n,a;
	printf("enter a no");
	scanf("%d",&n);
	a=fib(n);
	printf("%d",a);
}
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return(fib(n-1)+fib(n-2));
}
