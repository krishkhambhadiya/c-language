#include<stdio.h>
#include<conio.h>
main()
{
	int n,last, sum;
	clrscr();
	printf("Enter n :");
	scanf("%d",&n);
	last=n%10;

	while(n>9)
	{
		n=n/10;
	}
	sum=n+last;
	printf("sum of first and last digit %d : %d",n,sum);
	getch();
}