// Predefined Macros

#include <stdio.h>

int main() {
    printf("File: %s\n", __FILE__);
    printf("Compilation Date: %s\n", __DATE__);
    printf("Compilation Time: %s\n", __TIME__);
    return 0;
}
