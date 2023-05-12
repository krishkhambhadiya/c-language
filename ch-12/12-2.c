#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int experience;
	char companyname[20];
};

void main()
{
	int n,i;
	printf("Enter number of employee :");
	scanf("%d",&n);
	 struct employee s[n];
	 
	 system("cls");
	 
	 for(i=0; i<n; i++)
	 {
	 	printf("employee (%d/%d)\n\n",i+1,n);
	 	
	 	printf("Enter id\t:");
	 	scanf("%d",&s[i].id);
	 	printf("Enter name\t:");
	 	scanf("%s",&s[i].name);
	 	printf("Enter age\t:");
	 	scanf("%d",&s[i].age);
	 	printf("Enter role\t:");
	 	scanf("%s",&s[i].role);
	 	printf("Enter city\t:");
	 	scanf("%s",&s[i].city);
	 	printf("Enter experience\t:");
	 	scanf("%d",&s[i].experience);
	 	printf("Enter companyname\t:");
	 	scanf("%s",&s[i].companyname);
	 	
	 	system("cls");
	 }
	 
	 	printf("id\tname\tage\trole\tcity\texperience\tcompanyname\n");

	
	for(i=0; i<n; i++)
	{
		printf("%d\t",s[i].id);
		printf("%s\t",s[i].name);
		printf("%d\t",s[i].age);
		printf("%s\t",s[i].role);
		printf("%s\t",s[i].city);
		printf("%d\t",s[i].experience);
		printf("%s\n",s[i].companyname);
		
	}
}
