#include<stdio.h>

void arrayinput(int a[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
}

void arraysum(int a[],int n)
{
	int i,sum=0;
	for(i=0; i<n; i++)
	{
		sum =+ a[i];
	}
	printf("sum : %d",sum);
}
void main()
{
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	arrayinput[a,n];
	arraysum[a,n];
}
