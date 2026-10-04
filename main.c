#include <stdio.h>
#include "validation.h"
#include "integration.h"
#include "employees.h"
#include "suppliers.h"

#define MENU_MIN 1
#define MENU_MAX 6

void displayWelcome(void)
{
    printf("\nWelcome to Windhoek Municipality\n");
}

void displayMenu(void)
{
    printf("\n========================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("1. Employee Management\n");
    printf("2. Budget Management\n");
    printf("3. Supplier Management\n");
    printf("4. Asset Management\n");
    printf("5. Reports\n");
    printf("6. Exit\n");
}

/* Sends the user to the correct module. Returns 1 to keep running, 0 to exit. */
int handleChoice(int choice)
{
    switch (choice)
    {
        case 1: employeeMenu(); break;
        case 2: budgetMenu();   break;
        case 3: supplierMenu(); break;
        case 4: assetMenu();    break;
        case 5: reportsMenu();  break;
        case 6:
            if (getYesNo("Are you sure you want to exit"))
            {
                printf("\nThank you for using MFMS. Goodbye!\n");
                return 0;
            }
            break;
        default:
            printf("Invalid option.\n");
    }
    return 1;
}

int main(void)
{
    int choice;
    int running = 1;

    displayWelcome();

    while (running)
    {
        displayMenu();
        choice = getMenuChoice(MENU_MIN, MENU_MAX);
        running = handleChoice(choice);
    }
    return 0;
}
