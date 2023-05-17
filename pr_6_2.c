#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int count =0,i;
	
	printf("enter the name :");
	gets(str1);
	
	strcpy(str2,str1);
	strrev(str2);
	count = strcmp(str1,str2);
	
	if(count == 0)
	{
		printf("%S is palindrome\n",str1);
	}
	else
	{
		printf("%S is not palindrome\n",str1);
	}
	printf("name 1\t:");
	puts(str1);
	printf("name 2\t:");
	puts(str2);
	
	
	
}
