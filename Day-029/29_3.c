// Using extern to Access a Global Variable

#include <stdio.h>

int num = 10;  // Global variable

void display() {
    extern int num;  // Refers to the global variable
    printf("%d", num);
}

int main() {
    display();
    return 0;
}
