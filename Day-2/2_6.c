// Program to convert temperature from Celsius to Fahrenheit and vice versa
#include <stdio.h>

int main(){
    int choice;
    float temp, new_temp;
    // Displaying Menu
    printf("Enter 1 to convert Celsius to Fahrenheit\n");
    printf("Enter 2 to convert Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius : ");
            scanf("%f", &temp);
            new_temp = (temp*9/5)+32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp, new_temp);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit : ");
            scanf("%f", &temp);
            new_temp = (temp-32)*5/9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, new_temp);
            break;
        default:
            printf("Invalid choice! Please enter either 1 or 2.\n");
    }
    return 0;
}