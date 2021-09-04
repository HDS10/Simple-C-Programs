//tower of hanoi

#include<stdio.h>

void toh(int,char,char,char);

int main()
{
	int n;
	printf("enter the no of disk");
	scanf("%d",&n);
	toh(n,'a','c','b');
}
void toh(int n,char from,char to,char aux)
{
	if(n==1)
	{
		printf("move disk 1 from %c to %c\n",from,to);
		return;
	}
	toh(n-1,from,aux,to);
	printf("move disk %d from %c to %c\n",n,from,to);
	toh(n-1,aux,to,from);
}
