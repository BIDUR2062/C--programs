#include<stdio.h>
#include<string.h>

struct employee
{
	char name[50];
	char address[50];
	int age;
	float salary;
} e1[50];

int main()
{
	int i, n;
	int found = 0;
	printf("Enter the number of employees: ");
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		printf("Enter the details of employee %d:\n", i+1);
		printf("Enter the name:\n");
		scanf("%49[^\n]", e1[i].name);
		getchar();
		printf("Enter the address:\n");
		scanf("%49[^\n]", e1[i].address);
		getchar();
		printf("Enter the age:\n");
		scanf("%d", &e1[i].age);
		printf("Enter the salary:\n");
		scanf("%f", &e1[i].salary);
		getchar();
	}
	for(i = 0; i < n; i++)
	{
		if(e1[i].age >= 40 && e1[i].age <= 50 && strcmp(e1[i].address,"kathmandu") == 0)
		{
			printf("The name of the employee is: %s\n", e1[i].name);
			found = 1;
		}
	}
	if(!found)
	{
		printf("No employee has such details\n");
	}
	return 0;
}
