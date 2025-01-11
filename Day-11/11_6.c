// Write a program to represent a file's properties (size, type, or hidden flag)
//  using a union and display the assigned value

#include <stdio.h>

union FileProperties {
    long size;
    char type[5];
    int hiddenFlag;
};

int main() {
    union FileProperties file;
    int choice;

    printf("Enter 1 for size, 2 for type, 3 for hidden flag: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter file size (in bytes): ");
        scanf("%ld", &file.size);
        printf("File Size: %ld bytes\n", file.size);
    } else if (choice == 2) {
        printf("Enter file type: ");
        scanf("%s", file.type);
        printf("File Type: %s\n", file.type);
    } else if (choice == 3) {
        printf("Enter hidden flag (0/1): ");
        scanf("%d", &file.hiddenFlag);
        printf("Hidden Flag: %d\n", file.hiddenFlag);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
