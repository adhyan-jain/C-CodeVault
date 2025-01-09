// Take input for a day number (1–7) and print the corresponding day of the week

#include <stdio.h>

int main(){
    int num;
    printf("Enter number (1-7): ");
    scanf("%d", &num);
    switch(num){
        case 1: printf("The day is Monday"); break;
        case 2: printf("The day is Tueday"); break;
        case 3: printf("The day is Wednesday"); break;
        case 4: printf("The day is Thursday"); break;
        case 5: printf("The day is Friday"); break;
        case 6: printf("The day is Satday"); break;
        case 7: printf("The day is Sunday");  break;
        default : printf("Invalid"); break;
    }
    return 0;
}