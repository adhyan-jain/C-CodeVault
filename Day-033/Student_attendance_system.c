#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STUDENT_FILE "students.dat"
#define ATTENDANCE_FILE "attendance.dat"

typedef struct {
    int id;
    char name[50];
} Student;

typedef struct {
    int studentID;
    char date[11];  // Format: YYYY-MM-DD
    char status;    // 'P' for Present, 'A' for Absent
} Attendance;

void addStudent();
void displayStudents();
void markAttendance();
void viewAttendance();
void updateAttendance();
void returnToMenu();
void menu();

int main() {
    menu();
    return 0;
}

// Main menu function
void menu() {
    int choice;
    while (1) {
        printf("\nStudent Attendance System\n");
        printf("1. Add Student\n2. Display Students\n3. Mark Attendance\n4. View Attendance\n5. Update Attendance\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: markAttendance(); break;
            case 4: viewAttendance(); break;
            case 5: updateAttendance(); break;
            case 6: printf("Exiting...\n"); exit(0);
            default: printf("Invalid choice. Try again!\n");
        }
    }
}

// Function to add a new student
void addStudent() {
    FILE *file = fopen(STUDENT_FILE, "a");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    Student student;
    printf("Enter Student ID: ");
    scanf("%d", &student.id);
    getchar();  // Consume newline

    printf("Enter Student Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;  // Remove newline

    fwrite(&student, sizeof(Student), 1, file);
    fclose(file);

    printf("Student added successfully!\n");
    returnToMenu();
}

// Function to display all students
void displayStudents() {
    FILE *file = fopen(STUDENT_FILE, "r");
    if (!file) {
        printf("No students found!\n");
        returnToMenu();
        return;
    }

    Student student;
    int serial = 1;
    printf("\nList of Students:\n");
    printf("S.No\tID\tName\n");
    printf("-----------------------------\n");

    while (fread(&student, sizeof(Student), 1, file)) {
        printf("%d\t%d\t%s\n", serial++, student.id, student.name);
    }

    fclose(file);
    returnToMenu();
}

// Function to mark attendance
void markAttendance() {
    FILE *file = fopen(ATTENDANCE_FILE, "a");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }

    // Display students before marking attendance
    FILE *files = fopen(STUDENT_FILE, "r");
    if (!files) {
        printf("No students found!\n");
        returnToMenu();
        return;
    }

    Student student;
    int serial = 1;
    printf("\nList of Students:\n");
    printf("S.No\tID\tName\n");
    printf("-----------------------------\n");

    while (fread(&student, sizeof(Student), 1, files)) {
        printf("%d\t%d\t%s\n", serial++, student.id, student.name);
    }

    fclose(files);

    Attendance att;
    printf("Enter Student ID: ");
    scanf("%d", &att.studentID);
    getchar();  // Consume newline

    printf("Enter Date (YYYY-MM-DD): ");
    fgets(att.date, sizeof(att.date), stdin);
    att.date[strcspn(att.date, "\n")] = 0;  // Remove newline

    printf("Enter Attendance (P for Present, A for Absent): ");
    scanf(" %c", &att.status);

    fwrite(&att, sizeof(Attendance), 1, file);
    fclose(file);

    // Debugging check
    printf("\nDebug: Attendance for ID %d on %s marked as %c\n", att.studentID, att.date, att.status);
    printf("Attendance recorded successfully!\n");
    returnToMenu();
}


// Function to view attendance report
void viewAttendance() {
    FILE *file = fopen(ATTENDANCE_FILE, "r");
    if (!file) {
        printf("No attendance records found!\n");
        return;
    }

    int searchID, found = 0, serial = 1;
    printf("Enter Student ID to view attendance: ");
    scanf("%d", &searchID);

    Attendance att;
    printf("\nAttendance Report for Student ID %d:\n", searchID);
    printf("S.No\tDate\t\tStatus\n");
    printf("--------------------------------\n");

    while (fread(&att, sizeof(Attendance), 1, file)) {
        if (att.studentID == searchID) {
            printf("%d\t%s\t%c\n", serial++, att.date, att.status);
            found = 1;
        }
    }

    if (!found) {
        printf("No records found for Student ID %d.\n", searchID);
    }

    fclose(file);
    returnToMenu();
}

// Function to update an existing attendance record
void updateAttendance() {
    FILE *file = fopen(ATTENDANCE_FILE, "r+");
    if (!file) {
        printf("No attendance records found!\n");
        return;
    }

    Attendance att;
    int searchID, found = 0;
    char searchDate[11], newStatus;

    printf("Enter Student ID: ");
    scanf("%d", &searchID);
    getchar();  // Consume newline

    printf("Enter Date (YYYY-MM-DD) to update: ");
    fgets(searchDate, sizeof(searchDate), stdin);
    searchDate[strcspn(searchDate, "\n")] = 0;  // Remove newline

    printf("Enter New Attendance (P for Present, A for Absent): ");
    scanf(" %c", &newStatus);

    while (fread(&att, sizeof(Attendance), 1, file)) {
        if (att.studentID == searchID && strcmp(att.date, searchDate) == 0) {
            found = 1;
            fseek(file, -sizeof(Attendance), SEEK_CUR);  // Move back to update
            att.status = newStatus;
            fwrite(&att, sizeof(Attendance), 1, file);
            printf("Attendance updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("No record found for Student ID %d on %s.\n", searchID, searchDate);
    }

    fclose(file);
    returnToMenu();
}

// Function to return to the main menu or run the function again
void returnToMenu() {
    char choice;
    printf("\nReturn to main menu? (y/n): ");
    scanf(" %c", &choice);
    if (choice != 'y' && choice != 'Y') {
        printf("\nExiting program...\n");
        exit(0);
    }
}
