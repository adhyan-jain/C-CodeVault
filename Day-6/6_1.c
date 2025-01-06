// Calculate the factorial of a number.
#include <stdio.h>

int factorial(int num); // Function declaration

int main(){
    int num, fac;
    printf("Enter number: ");
    scanf("%d", &num);
    fac=factorial(num); // Calling the function
    printf("Factorial: %d", fac);
    return 0;
}

// Function Definition
int factorial(int num){
    while(num>1){
        // Using rescursive function to run till num=1
        return num * factorial(num-1);
    }
}