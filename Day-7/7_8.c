// Program to store and print student data using pointers
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
};

int main() {
    struct Student student = {1, "John Doe"};
    struct Student *ptr = &student;

    printf("Student Details:\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);

    return 0;
}
