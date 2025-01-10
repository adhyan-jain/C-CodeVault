// Implement a program to store and display details of 5 students using arrays of structures

#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student students[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d (Name Age Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}
