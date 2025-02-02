// Bank Employee Record Management System
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define FILENAME "bank_employees.txt"

typedef struct {
    int id;
    char name[50];
    char email[50];
    char phone[15];
    double salary;
} Employee;

void createFile();
void addEmployee();
void displayEmployees();
void searchEmployee();
void deleteFile();
menu();

// Main function
int main() {
    menu();
    return 0;
}

// Function to prompt user to return to the main menu
void returnToMenu() {
    char choice;
    printf("\nReturn to main menu? (y/n): ");
    scanf(" %c", &choice);
    if (choice != 'y' && choice != 'Y') {
        printf("\nExiting program...\n");
        exit(0);
    }
}

// Function to create a new file
void createFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }
    fclose(file);
    printf("\nFile created successfully!\n");
    returnToMenu();
}

// Function to add multiple employee records
void addEmployee() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int num;
    printf("\nEnter the number of employees you want to add: ");
    scanf("%d", &num);

    Employee emp;
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &emp.id);
        printf("Enter Name: ");
        scanf(" %[^\n]", emp.name);
        printf("Enter Email: ");
        scanf("%s", emp.email);
        printf("Enter Phone Number: ");
        scanf("%s", emp.phone);
        printf("Enter Salary: ");
        scanf("%lf", &emp.salary);

        fwrite(&emp, sizeof(Employee), 1, file);
        printf("Record added successfully!\n");
    }

    fclose(file);
    returnToMenu();
}


// Function to display all employee records
void displayEmployees() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("\nError opening file or file does not exist!\n");
        return;
    }

    Employee emp;
    int count = 0;  // Serial number counter

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("S.No | ID   | Name               | Email                | Phone          | Salary\n");
    printf("-------------------------------------------------------------------------------------------\n");

    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("%-4d | %-4d | %-18s | %-20s | %-15s | %.2lf\n", 
               ++count, emp.id, emp.name, emp.email, emp.phone, emp.salary);
    }

    if (count == 0)
        printf("No records found!\n");

    printf("-------------------------------------------------------------------------------------------\n");

    fclose(file);
    returnToMenu();
}

// Function to search employee by ID, Name, Email, Phone, or Salary
void searchEmployee() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("\nNo records found!\n");
        returnToMenu();
        return;
    }

    int choice, searchID, count = 0;
    char searchStr[50], empLower[50], searchLower[50];
    double searchSalary;
    Employee emp;
    int found = 0;

    printf("\nSearch by:\n");
    printf("1. ID\n2. Name\n3. Email\n4. Phone Number\n5. Salary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter search value: ");
    if (choice == 1) {
        scanf("%d", &searchID);
    } else if (choice == 5) {
        scanf("%lf", &searchSalary);
    } else {
        scanf(" %[^\n]", searchStr);
        for (int i = 0; searchStr[i]; i++) {  
            searchLower[i] = tolower(searchStr[i]);  
        }  
        searchLower[strlen(searchStr)] = '\0';  // Convert input to lowercase
    }

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("S.No | ID   | Name               | Email                | Phone          | Salary\n");
    printf("-------------------------------------------------------------------------------------------\n");

    

    while (fread(&emp, sizeof(Employee), 1, file)) {
        int match = 0;

        if (choice == 1 && emp.id == searchID) {
            match = 1;
        } 
        else if (choice == 2) { 
            for (int i = 0; emp.name[i]; i++) empLower[i] = tolower(emp.name[i]);
            empLower[strlen(emp.name)] = '\0';
            if (strcmp(empLower, searchLower) == 0) match = 1;
        } 
        else if (choice == 3) {  
            for (int i = 0; emp.email[i]; i++) empLower[i] = tolower(emp.email[i]);
            empLower[strlen(emp.email)] = '\0';
            if (strcmp(empLower, searchLower) == 0) match = 1;
        } 
        else if (choice == 4) {  
            if (strcmp(emp.phone, searchStr) == 0) match = 1;
        } 
        else if (choice == 5 && emp.salary == searchSalary) {
            match = 1;
        }

        if (match) {
            printf("%-4d | %-4d | %-18s | %-20s | %-15s | %.2lf\n", 
               ++count, emp.id, emp.name, emp.email, emp.phone, emp.salary);
            found=1;
        }
    }

    if (!found) printf("\nNo matching records found!\n");

    printf("--------------------------------------------------------------------------------------------\n");

    fclose(file);
    returnToMenu();
}


// Function to delete the entire file
void deleteFile() {
    if (remove(FILENAME) == 0) {
        printf("\nFile deleted successfully!\n");
    } else {
        printf("\nError: File not found!\n");
    }
    returnToMenu();
}

// Main menu function
void menu() {
    int choice;
    while (1) {
        printf("\n===== Bank Employee Management System =====\n");
        printf("1. Create File\n2. Add Employee\n3. Display Employees\n4. Search Employee\n5. Delete Entire File\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile();
                break;
            case 2:
                addEmployee();
                break;
            case 3:
                displayEmployees();
                break;
            case 4:
                searchEmployee();
                break;
            case 5:
                deleteFile();
                break;
            case 6:
                printf("\nExiting program...\n");
                exit(0);
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    }
}

