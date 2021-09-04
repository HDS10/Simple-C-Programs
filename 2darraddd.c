//addiction of 2d array

#include<stdio.h>

int main()
{
	int a[100][100],b[100][100],c[100][100];
	int m,n,p,q,i,j;
	printf("enter the no of rows and coloumn of array a");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the element");
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the no of rows and coloumn of array b");
	scanf("%d%d",&p,&q);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the element");
			scanf("%d",&b[i][j]);
		}
	}
	if(m!=p||n!=q)
	printf("sum of array is not possible");
	else
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	}
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",&c[i][j]);
		}
		printf("\n");
	}
	
}
