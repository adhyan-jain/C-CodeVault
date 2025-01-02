// Program to calculate the grade of a student based on marks input
#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    if (marks<=0 || marks>=100){
        printf("Invalid input");
    }
    else{
    if(marks >= 90){
        printf("Grade: S");
    }
    else if (marks>=80){
        printf("Grage A");
    }
    else if (marks>=70){
        printf("Grade B");
    }
    else if (marks>=60){
        printf("Grade C");
    }
    else if (marks>=50){
        printf("Grade D");
    }
    else if (marks>=40){
        printf("Grade E");
    }
    else {
        printf("Grade F - Fail");
    }
    }
    return 0;
}