//function to check if the no is palandrom or not

#include<stdio.h>

int palindrome(int,int);

int main()
{
	int a,b,c;
	printf("enter any no");
	scanf("%d",&a);
	b=a;
	c=palindrome(a,b);
	if(c==1)
	printf("the no %d is palindrome",a);
	else
	printf("the no %d is not a palindrome",a);
}
int palindrome(int a,int b)
{
	int rev=0;
	while(a!=0)
	{
		rev=rev*10+a%10;
		a=a/10;
	}
	if(b==rev)
	return 1;
	else
	return 0;
}
