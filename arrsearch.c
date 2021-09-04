//to search a element in the array

#include<stdio.h>

int main()
{
	int arr[100];
	int i,n,s,flag=0;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be search\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			printf("the element is located at the %d position",i+1);
			flag=1;
		}
	}
	if(flag==0)
	printf("element not found ");
}
