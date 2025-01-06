// Check if a number is prime using function
#include <stdio.h>

// Function declaration
int is_prime(int num);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    // Calling function
    if (is_prime(num)){
        printf("%d is a prime number", num);
    }
    else{
        printf("%d is not a prime number", num);
    }
}

// Function definition
int is_prime(int num){
    if (num==1){ // 1 is neither prime nor composite
        return 0;
    }
    else{
        // To check if number is divisible by any in range 2 to number-1
        for (int i=2; i<num; i++){
            if (num % i == 0){
                return 0;
            }
        }
        return 1;
    }
}