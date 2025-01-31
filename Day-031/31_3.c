// Deleting an Employee Record

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
    FILE *file = fopen("employee2.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int deleteID, found = 0;
    printf("Enter Employee ID to delete: ");
    scanf("%d", &deleteID);

    while (fscanf(file, "%s %d %s %s %f", emp.name, &emp.id, emp.phone, emp.email, &emp.salary) != EOF) {
        if (emp.id != deleteID) {
            fprintf(tempFile, "%s %d %s %s %.2f\n", emp.name, emp.id, emp.phone, emp.email, emp.salary);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("employee2.txt");
        rename("temp.txt", "employee2.txt");
        printf("Record deleted successfully!\n");
    } else {
        remove("temp.txt");
        printf("Record not found!\n");
    }

    return 0;
}
