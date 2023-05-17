#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50]="krishkhambhadiya8004@gmail.com",str2[20]="8004",str3[20],str4[20];
	printf("enter email :");
	gets(str3);
	printf("enter password :");
	gets(str4);
	
	
	
	
	if(strcmp(str2,str4) == 0 && strcmp(str1,str3) == 0 )
	{
		printf("valid password");
	}
	else
	{
		printf("not valid");
	}
}
