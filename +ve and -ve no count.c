//to count no of pos ,neg 

#include <stdio.h>

int main()
{
	int a[100][100],i,j,r,c,pos=0,neg=0;
	printf("Enter the rows and columns: ");
	scanf("%d %d",&r,&c);
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>0)
				pos++;
			else if(a[i][j]<0)
				neg++;
		}
	}
	printf("\nNo. of +ve nos = %d\nNo. of -ve nos = %d",pos,neg);
	
}
