#include<stdio.h>

int sum()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("sum : %d\n\n",a+b);
	return a+b;
}
int sub()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("sub : %d\n\n",a-b);
	return a-b;
}
int multi()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("multi : %d\n\n",a*b);
	return a*b;
}

int divi()
{
	int a,b;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	printf("divi : %d\n\n",a/b);
	return a/b;
}
void main()
{
	sum();
	sub();
	multi();
	divi();
}
