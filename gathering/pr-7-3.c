#include<stdio.h>

int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
void main()
{
	int ans = fact(4);
	printf("factorial : %d",ans);
}
