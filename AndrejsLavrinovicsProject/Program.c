//*****************************************************************************
// C program that will allow you to retrieve, add, delete, update and
// manipulate an employee database.
// The database is password protected and only the correct username and
// password details will allow the user to gain access to the Employee Menu.
//*****************************************************************************

#include<stdio.h>
#include<stdlib.h>

// Structures declaration
struct login{
	char username[30];
	char password[20];
};

struct date{
	int day;
	int month;
	int year;
};

struct employee{
	int e_id;
	char e_name[40];
	char e_address[100];
	char e_department[10];
	struct date e_hiring;
	float salary;
	char e_email[40];
};

void main(void)
{

	

	printf("\n\n\n");
	system("pause");
} // main