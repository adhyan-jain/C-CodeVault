//Write a program to demonstrate memory sharing in a union by 
//assigning values to multiple members and printing their effects

#include <stdio.h>

union SharedMemory {
    int intValue;
    float floatValue;
    char str[20];
};

int main() {
    union SharedMemory u;

    // Assign values one by one and print
    u.intValue = 42;
    printf("Integer: %d\n", u.intValue);

    u.floatValue = 3.14;
    printf("Float: %.2f\n", u.floatValue);

    // Assign string (overwrites previous values)
    snprintf(u.str, 20, "Hello");
    printf("String: %s\n", u.str);

    return 0;
}
