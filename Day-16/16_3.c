// Write a program to open a binary file and write some text to it

#include <stdio.h>
#include <stdlib.h>

struct threeNum {
    int n1, n2, n3;
};

int main(){
    int n;
    // Structure variable declared here.
    struct threeNum num;
    FILE* file;
    if ((file = fopen("16_3.bin", "wb")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    int flag = 0;
    // else it will return a pointer to the file.
    for (n = 1; n < 5; ++n) {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        flag = fwrite(&num, sizeof(struct threeNum), 1,file);
    }

    // checking if the data is written
    if (flag) {
        printf("Operation Successful");
    }
    else {
        printf("Operation Failed");
    }
    fclose(file);
    return 0;
}