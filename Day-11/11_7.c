// Design a program to store and print a date in multiple formats (e.g., dd-mm-yyyy and mm/dd/yyyy) using a union.

#include <stdio.h>

union Date {
    struct {
        int day;
        int month;
        int year;
    } parts;
    char fullDate[11]; // For "dd-mm-yyyy" format
};

int main() {
    union Date date;

    // Input day, month, and year
    printf("Enter day, month, and year: ");
    scanf("%d %d %d", &date.parts.day, &date.parts.month, &date.parts.year);

    // Print in multiple formats
    printf("Date (dd-mm-yyyy): %02d-%02d-%04d\n", date.parts.day, date.parts.month, date.parts.year);
    snprintf(date.fullDate, 11, "%02d/%02d/%04d", date.parts.month, date.parts.day, date.parts.year);
    printf("Date (mm/dd/yyyy): %s\n", date.fullDate);

    return 0;
}
