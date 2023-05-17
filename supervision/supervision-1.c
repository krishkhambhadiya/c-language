#include<stdio.h>

void main()
{
	FILE 	*f1;
	int a;
	
	f1 = fopen("C:\\Users\\r4\\Desktop\\kk.txt","a");
	fprintf(f1,"name:KRISH",&a);	
}
