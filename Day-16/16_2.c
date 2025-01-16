// Create a program that reads data from a file and prints it

#include <stdio.h>

int main(){

    FILE* file;
    file = fopen("16_2.txt", "r");
    if (file == NULL){
        printf("Error opening file");
        return 0;
    }
    else{
        printf("File successfully opened\n");
    }

    char data[100];
    while (fgets(data,100,file)){
        printf("%s",data);
    }
    fclose(file);
    printf("\nThe file is closed now.");
    return 0;
}