
#include<stdio.h>

/* 6.WAP to perform column-wise sum of 2D array.*/

void main()
{
	int r,c;
	printf("Enter number of row\t:");
	scanf("%d",&r);
	printf("Enter number of column\t:");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,Csum=0;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			Csum=Csum+a[i][j];
		}
		printf("\n");
	}
	printf("\nSum of all the elemts in column %d is %d\n",i,Csum);
}
