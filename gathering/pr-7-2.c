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

void arraylength(int a[],int n)
{
	int i,length=0;
	for(i=0; i<n; i++)
	{
		length++;
	}
	printf("length : %d",length);
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
