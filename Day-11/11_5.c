// Implement a program to manage student records using a union that stores 
// either a GPA (float) or an ID (int), based on user choice.

#include <stdio.h>

union StudentRecord {
    float gpa;
    int id;
};

int main() {
    union StudentRecord student;
    int choice;

    printf("Enter 1 to store GPA or 2 to store ID: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter GPA: ");
        scanf("%f", &student.gpa);
        printf("Stored GPA: %.2f\n", student.gpa);
    } else if (choice == 2) {
        printf("Enter ID: ");
        scanf("%d", &student.id);
        printf("Stored ID: %d\n", student.id);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
