// Calculate and print the size difference between a union and a 
// structure containing identical members (int, float, char)

#include <stdio.h>

union ExampleUnion {
    int intValue;
    float floatValue;
    char charValue;
};

struct ExampleStruct {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    printf("Size of union: %lu bytes\n", sizeof(union ExampleUnion));
    printf("Size of structure: %lu bytes\n", sizeof(struct ExampleStruct));
    return 0;
}
