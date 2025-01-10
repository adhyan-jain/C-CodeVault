// program to compare structure sizes with and without padding

#include <stdio.h>

struct PackedStruct {
    char a;
    int b;
};

#pragma pack(push, 1)
struct PackedStructPacked {
    char a;
    int b;
};
#pragma pack(pop)

int main() {
    printf("Size of structure without packing: %lu\n", sizeof(struct PackedStruct));
    printf("Size of structure with packing: %lu\n", sizeof(struct PackedStructPacked));
    
    return 0;
}
