//  Use of #undef

#include <stdio.h>

#define VALUE 100

int main() {
    printf("Initial VALUE: %d\n", VALUE);

    #undef VALUE
    #define VALUE 200

    printf("Updated VALUE: %d\n", VALUE);

    return 0;
}
