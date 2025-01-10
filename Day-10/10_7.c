// Use bit fields in a structure to represent file permissions and display them

#include <stdio.h>

struct FilePermissions {
    int read;
    int write;
    int execute;
};

int main() {
    struct FilePermissions file = {1, 0, 1};  // read, write, execute

    printf("Read: %u, Write: %u, Execute: %u\n", file.read, file.write, file.execute);

    return 0;
}
