#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee 
{
	char name[20];
	int age;
	long phone;
	int salary;
}emp[20];

void main()
{
	int n,i;
	printf("How Much Employee details you want to store:");
	scanf("%d",&n);
	if(n>=20)
	{
		printf("Maximum 20 Employee details can be stored.");
	}
	else 
	{
	  for (i=0;i<n;i++)
	  {
	    printf("Enter Employee's Name:");
	    scanf("%s",&emp[i].name);
	    printf("Enter Employee's Age:");
	    scanf("%d",&emp[i].age);
	    printf("Enter Employee's Phone Number:");
	    scanf("%d",&emp[i].phone);
	    printf("Enter Employee's Salary:");
	    scanf("%d",&emp[i].salary);
      }
      //display(n);
      printf("Name\tAge\tPhoneNo.\tSalary\n");
	  for(i=0;i<n;i++)
	  {
	    printf("%s\t%d\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phone,emp[i].salary);
      }
    }
}

