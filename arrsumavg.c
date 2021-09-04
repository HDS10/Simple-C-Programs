//sum and avr of marks in the arry

#include<stdio.h>

int main()
{
	int marks[100];
	int i,sum=0;
	float n,avg;
	printf("enter the no of element in the array\n");
	scanf("%f",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the marks\n");
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/n;
	printf("the sum and average of the marks are %d and %f respectively",sum,avg);
}
