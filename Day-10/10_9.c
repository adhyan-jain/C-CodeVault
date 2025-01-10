// Create a packed structure using #pragma pack and compare its size to a padded structure

#include <stdio.h>

struct RegularStruct {
    char a;
    int b;
};

#pragma pack(push, 1)
struct PackedStruct {
    char a;
    int b;
};
#pragma pack(pop)

int main() {
    printf("Size of regular structure: %lu\n", sizeof(struct RegularStruct));
    printf("Size of packed structure: %lu\n", sizeof(struct PackedStruct));
    
    return 0;
}
