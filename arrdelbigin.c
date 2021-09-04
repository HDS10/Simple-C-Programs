//delete a element at the begining of a arry

#include<stdio.h>

int main()
{
	int arr[100];
	int i,n;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
