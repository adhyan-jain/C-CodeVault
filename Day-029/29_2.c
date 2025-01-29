// Using static to Retain Value Across Function Calls

#include <stdio.h>

void counter() {
    static int count = 0;  // Static variable retains value across function calls
    count++;
    printf("%d ", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
