//insert a element at the specific location of a array
#include<stdio.h>

int main()
{
	int arr[100];
	int i,n,a,l;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	printf("enter a no to be added\n");
	scanf("%d",&a);
	printf("enter the location at which you wnat to add the no\n");
	scanf("%d",&l);
	for(i=n;i>=l;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[l-1]=a;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
