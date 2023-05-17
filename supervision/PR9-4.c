#include<stdio.h>

void main()
{
	FILE *k1;
	FILE *k2;
	
	char a[30];
	
	f2 = fopen("C:\\Users\\r6\\Desktop\\k1.txt","w");
	f1 = fopen("C:\\Users\\r6\\Desktop\\K2.txt","r");
	
	fscanf(k1,"%s",&a);
	printf("%s",a);
	fprintf(k2,"%s",a);
}
