//to find the largest and smallest in the arrray

#include<stdio.h>

int main()
{
	int arr[100];
	int i,n,l,s;
	printf("enter the no of element in the array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element\n");
		scanf("%d",&arr[i]);
	}
	l=arr[0];
	s=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>l)
		l=arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<s)
		s=arr[i];
	}
	printf("largest element is %d\n",l);
	printf("smallest element is %d",s);
}
