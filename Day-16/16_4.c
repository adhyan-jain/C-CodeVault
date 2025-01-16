// Create a program that reads data from a file and prints it

#include <stdio.h>
#include <stdlib.h>
struct threeNum {
    int n1, n2, n3;
};
int main()
{
    int n;
    struct threeNum num;
    FILE* file;
    if ((file = fopen("16_4.bin", "rb")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    // else it will return a pointer to the file.
    for (n = 1; n < 5; n++) {
        fread(&num, sizeof(struct threeNum), 1, file);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(file);

    return 0;
}