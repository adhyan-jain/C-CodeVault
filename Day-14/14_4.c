// Grade Evaluation

#include <stdio.h>

// Define enumeration for grades
enum Grade {
    Excellent = 1, Good, Average, Fail
};

int main() {
    enum Grade studentGrade;
    printf("Enter the grade (1: Excellent, 2: Good, 3: Average, 4: Fail): ");
    scanf("%d", &studentGrade);

    switch (studentGrade) {
        case Excellent:
            printf("You did an excellent job! Keep it up!\n");
            break;
        case Good:
            printf("Good work! A little more effort, and you'll be excellent!\n");
            break;
        case Average:
            printf("You're doing okay, but there’s room for improvement.\n");
            break;
        case Fail:
            printf("Don't give up! Work harder and you'll do better next time.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}
