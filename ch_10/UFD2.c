#include<stdio.h>

void div()
{
	int a;
	printf("Enter a :");
	scanf("%d",&a);
	
	if(a%3 == 0 && a%5 == 0)
	{
		printf("%d is divisible by 3 & 5.");
	}
	else
	{
		printf("%d is not divisible by 3 & 5. ");
	}

}
void main()
{
	printf("START\N\N");
	
	div();
	
	printf("\nEND");
}
