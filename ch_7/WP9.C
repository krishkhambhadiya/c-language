#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,s;
	clrscr();
	for(i=1; i<=5; i++ )
	{
		for(s=4; s>=(5-i); s--)
		{
			printf(" ");

		}
		for(j=i; j<=5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}