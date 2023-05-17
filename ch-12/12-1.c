#include<stdio.h>

struct Student
{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
};

void main()
{
	int n,i;
	printf("Enter number of students :");
	scanf("%d",&n);
	 struct Student s[n];
	 
	 system("cls");
	 
	 for(i=0; i<n; i++)
	 {
	 	printf("Student (%d/%d)\n\n",i+1,n);
	 	
	 	printf("Enter id\t:");
	 	scanf("%d",&s[i].id);
	 	printf("Enter name\t:");
	 	scanf("%s",&s[i].name);
	 	printf("Enter age\t:");
	 	scanf("%d",&s[i].age);
	 	printf("Enter course\t:");
	 	scanf("%s",&s[i].course);
	 	printf("Enter city\t:");
	 	scanf("%s",&s[i].city);
	 	printf("Enter std\t:");
	 	scanf("%d",&s[i].std);
	 	printf("Enter school\t:");
	 	scanf("%s",&s[i].school);
	 	
	 	system("cls");
	 }
	 
	 	printf("id\tname\tage\tcourse\tcity\tstd\tschool\n");

	
	for(i=0; i<n; i++)
	{
		printf("%d\t",s[i].id);
		printf("%s\t",s[i].name);
		printf("%d\t",s[i].age);
		printf("%s\t",s[i].course);
		printf("%s\t",s[i].city);
		printf("%d\t",s[i].std);
		printf("%s\n",s[i].school);
		
	}
}
