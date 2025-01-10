// Write a program to store student attendance using bit fields and display the status

#include <stdio.h>

struct Attendance {
    int student1;
    int student2;
    int student3;
    int student4;
    int student5;
    int student6;
    int student7;
    int student8;
};

int main() {
    struct Attendance a = {1, 0, 1, 1, 0, 1, 1, 0};  // 1 for present, 0 for absent

    printf("Attendance Status: \n");
    printf("Student 1: %s\n", a.student1 ? "Present" : "Absent");
    printf("Student 2: %s\n", a.student2 ? "Present" : "Absent");
    printf("Student 3: %s\n", a.student3 ? "Present" : "Absent");
    printf("Student 4: %s\n", a.student4 ? "Present" : "Absent");
    printf("Student 5: %s\n", a.student5 ? "Present" : "Absent");
    printf("Student 6: %s\n", a.student6 ? "Present" : "Absent");
    printf("Student 7: %s\n", a.student7 ? "Present" : "Absent");
    printf("Student 8: %s\n", a.student8 ? "Present" : "Absent");

    return 0;
}
