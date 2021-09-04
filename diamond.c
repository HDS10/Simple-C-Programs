//to disply a diamond
#include<stdio.h>

int main()
{
	int a,i,j,k;
	printf("enter the value");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(k=1;k<=(a-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
			printf("* ");
		
		printf("\n");
	}
	for(i=1;i<=a;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=(a-i);j++)
		{
			printf("* ");
		}
		printf("\n");
	}		
}
