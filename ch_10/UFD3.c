#include<stdio.h>

void togglecase()
{
	char a;
	printf("Enter any character :");
	scanf("%d",&a);
	
	if(a>=65 && a<=90)
	{
		printf("char:%c",a+32);
	}
	else if(a>=97 && a<=122)
	{
		printf("char:%c",a-32);
		
	}
}

void main()
{
	printf("START\n\n");
	
	togglecase();
	
	printf("\nEND");
}
