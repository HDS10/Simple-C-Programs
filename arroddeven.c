//to seperate even and odd no of a array into 2 seperate array
#include<stdio.h>
int main()
{
	int arr[100],even[100],odd[100];
	int i,j=0,k=0,n;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}	
	}
	printf("even array ");
		for(i=0;i<j;i++)
	{
		printf("%d\t",even[i]);
	}
	printf("\n");
	printf("odd array ");
		for(i=0;i<k;i++)
	{
		printf("%d\t",odd[i]);
	}
}
