// Create a program that uses a union to store a character and an integer and 
// outputs both after assigning a value to each

#include <stdio.h>

union Data {
    char character;
    int integer;
};

int main() {
    union Data data;

    // Assign a value to the character member
    data.character = 'A';
    printf("Character: %c\n", data.character);

    // Assign a value to the integer member
    data.integer = 100;
    printf("Integer: %d\n", data.integer);

    // Note: Assigning to one member of a union overwrites the others
    printf("Character after integer assignment: %c (may show garbage value)\n", data.character);

    return 0;
}
