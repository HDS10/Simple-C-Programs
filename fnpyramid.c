//function to print a pyramid
#include<stdio.h>

int pyramid(int,char);

int main()
{
	int a;
	char b;
	printf("enter the no of lines of the pyramid");
	scanf("%d",&a);
	printf("enter the character to be printed");
	scanf(" %c",&b);
	pyramid(a,b);
}
int pyramid(int a,char b)
{
	int i,j,k;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=(a-i);j++)
		{
		printf(" ");
		}
		for(k=1;k<=i;k++)
		{
		printf("%c ",b);	
		}
		printf("\n");
	}
 } 
