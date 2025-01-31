// Adding an Employee Record

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char phone[15];
    char email[50];
    float salary;
};

int main() {
    struct Employee emp;
    FILE *file = fopen("employee2.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter Employee Name: ");
    scanf("%s", emp.name);
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Phone Number: ");
    scanf("%s", emp.phone);
    printf("Enter Email: ");
    scanf("%s", emp.email);
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);
    
    fprintf(file, "%s %d %s %s %.2f\n", emp.name, emp.id, emp.phone, emp.email, emp.salary);
    printf("Record added successfully!\n");
    
    fclose(file);
    return 0;
}
