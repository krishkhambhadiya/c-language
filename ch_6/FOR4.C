#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n;
	clrscr();
	printf("enter n :");
	scanf("%d",&n);
	for(i=n; i>=1; i--)
	{
		printf("%d ",i);

	}
	getch();
}