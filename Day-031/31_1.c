// Creating a File and Deleting a File

#include <stdio.h>

void delete();

int main() {
    FILE *file = fopen("employee1.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    printf("File created successfully.\n");
    fclose(file);
    int num;
    printf("To delete file press 1: ");
    scanf("%d", &num);
    if(num==1){
        delete();
    }
    return 0;
}


void delete() {
    if (remove("employee.txt") == 0) {
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting file!\n");
    }
}
