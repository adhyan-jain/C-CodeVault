// Define and Use a Macro


#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    int number = 5;
    printf("The square of %d is %d\n", number, SQUARE(number));
    return 0;
}
