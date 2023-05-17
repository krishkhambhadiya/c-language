#include<stdio.h>

void main()
{
	FILE *fp1, *fp2;
	char a[20];
	
	fp1 = fopen("C:\\Users\\r4\\Desktop\\k1.txt","w");
	fp2 = fopen("C:\\Users\\r4\\Desktop\\k2.txt","r");
	
	
	
	fscanf(fp1,"%[^\n]",&a);
	
	printf("%s",a);
	
	fprintf(fp2,"%s",a);
	
	
}
