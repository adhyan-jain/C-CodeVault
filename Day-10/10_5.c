// Create a structure containing another structure and display the nested structure’s data

#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
};

struct Person {
    char name[50];
    struct Address addr;
};

int main() {
    struct Person p = {"John", {"123 Street", "CityName"}};

    printf("Name: %s\n", p.name);
    printf("Address: %s, %s\n", p.addr.street, p.addr.city);

    return 0;
}
