// Use typedef to define an alias for a structure and display its members

#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p;
    printf("Enter name and age: ");
    scanf("%s %d", p.name, &p.age);

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    return 0;
}
