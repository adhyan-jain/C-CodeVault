// program to modify structure data using a pointer

#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student s = {"John", 20};
    struct Student *ptr = &s;

    printf("Before modification:\n");
    printf("Name: %s, Age: %d\n", s.name, s.age);

    // Modify structure data using pointer
    ptr->age = 21;
    printf("After modification:\n");
    printf("Name: %s, Age: %d\n", s.name, s.age);

    return 0;
}
