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

// Declaring functions
void display_menu();
int make_choice();

void main(void)
{
	// VARIABLES
	//*****************************************
	int option;

	// PROGRAM MENU AND PROCESS
	display_menu();
	option = make_choice();

	while (option != 0)
	{


		option = make_choice();
	}

	printf("\n\n\n");
	system("pause");
} // main

void display_menu()
{
	printf("\n\tMENU");
	printf("\n\t=======================================");
	printf("\n\t1) Add employee");
	printf("\n\t2) Display employee details");
	printf("\n\t3) Update employee");
	printf("\n\t4) Delete employee");
	printf("\n\t5) Display all employee by department");
	printf("\n\t6) Employee report\n");
	printf("\n\tEnter 7 for MENU");
	printf("\n\tEnter 0 for EXIT");
	printf("\n\t========================================");
}

int make_choice()
{
	// Local variables
	int num;
	printf("\n\tEnter option number (7 for MENU, -1 for EXIT) -->   ");
	scanf_s("%d", &num);

	// validation number
	while (0 > num || num > 7)
	{
		printf("\n\t!!!ERROR: OPTION IS NOT VALID!!!");
		printf("\n\tEnter option number (7 for MENU, -1 for EXIT) -->   ");
		scanf_s("%d", &num);
	}
	return num;
}