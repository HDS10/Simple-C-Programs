//enter the time in seconnds(int) and convert it in the form hours minutes seconds

#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int d;
	printf("enter the time in seconds");
	scanf("%d",&a);
	b=a/3600;
	c=(a-(3600*b))/60;
	d=(a-(3600*b))-(c*60);
	printf("the time is %dhours %dminutes %dseconds",b,c,d);
	 
	
 }
