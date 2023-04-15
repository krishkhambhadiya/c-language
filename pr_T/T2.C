#include<stdio.h>
#include<conio.h>
main()
{
	 int a,count=0;
	 clrscr();
	 printf("Enter a :");
	 scanf("%d",&a);

	 while(a>0)
	 {
		a=a/10;
		count++;

	 }
	 printf("Total digit : %d",count);
	 getch();
}