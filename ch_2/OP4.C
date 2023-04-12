#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("enter the value of x  ;");
	scanf("%d",&x);
	printf("\nenter the value of y :");
	scanf("%d",&y);
	z=(x-y)*(x-y)*(x-y);
	printf("\n ans is %d",z);
	getch();
}