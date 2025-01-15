// Conditional Compilation

#include <stdio.h>

#define DEBUG 1

int main() {
    #ifdef DEBUG
        printf("Debugging is enabled.\n");
        printf("Debug message: Value of DEBUG is %d\n", DEBUG);
    #else
        printf("Debugging is disabled.\n");
    #endif
    return 0;
}
