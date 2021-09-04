//to check if the month has 30 days or 31 days

#include<stdio.h>

int main()
{
	int a;
	printf("enter  the month");
	scanf("%d",&a);
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	printf("the month has 31 days");
	else if(a==4||a==6||a==9||a==11)
	printf("the month has 30 days");
	else
	printf("the month may contain 28 or 29 days");
}

