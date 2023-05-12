#include<stdio.h>
void cube();

void cube()
{
	int a,cube=0;
	printf("enter a:");
	scanf("%d",&a);
	cube = a*a*a;
	printf("cube :%d",cube);
}

void main()
{
	printf("START\n\n");
	
	cube();
	
	printf("\nEND");
}

