//delete a element at the specified of a arry

#include<stdio.h>

int main()
{
	int arr[100];
	int i,n,a,j;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	    printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	printf("enter a no to be deleted\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			for(j=i;j<n;j++)
			{
				arr[j]=arr[j+1];
			}
		}
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
