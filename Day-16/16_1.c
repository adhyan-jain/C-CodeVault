// Write a program to open a file and write some text to it

#include <stdio.h>

int main(){
    FILE* file;
    file = fopen("16_1.txt", "w");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }
    else{
        printf("File successfully opened\n");
    }
    fprintf(file, "Hello, I am a human\n");
    fclose(file);
    return 0;
}