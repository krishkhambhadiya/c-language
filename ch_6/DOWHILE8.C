#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,n,sum=0;
	clrscr();
	printf("enter n :");
	scanf("%d",&n);

	do
	{
		sum = sum+i;
		i++;
	}while(i<=n);
		printf("sum of %d number : %d",n,sum);
	       getch();
}