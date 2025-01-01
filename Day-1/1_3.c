#include <stdio.h>
// Performing arithmetic operations (addition, subtraction, multiplication, division)
int main(){
    // Defining Variables
    int a=7, b=37;
    int addition,subtraction,multiplication;
    float division;
    // Performing arithmetic operations
    addition = a+b;
    subtraction = a-b;
    multiplication = a*b;
    division = (float) a/b;
    // Printing the result of arithmetic operations
    printf("Addition of two numbers is %d\n",addition);
    printf("Subtraction of two numbers is %d\n",subtraction);
    printf("Multiplication of two numbers is %d\n",multiplication);
    printf("Division of two numbers is %f\n",division);
    return 0;
}