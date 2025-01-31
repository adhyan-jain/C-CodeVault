// Reading file

#include <stdio.h>

int main() {
    FILE *file;
    char line[256]; // Buffer to store each line

    file = fopen("employee2.txt", "r"); // Open file in read mode

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line); // Print each line
    }

    fclose(file); // Close the file
    return 0;
}
