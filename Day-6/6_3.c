// Fibonacci serie's nth term using recursion.
#include <stdio.h>

// Function Declaration
int fibonacci(int num);

int main(){
    int num, fib;
    printf("Enter the term required: ");
    scanf("%d", &num);
    fib = fibonacci(num);
    printf("The %dth term of fibonacci series is %d", num, fib);
    return 0;
}

// Function definition
int fibonacci(int num){

    if (num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return -1;
    }
    else if (num == 0){
        return 0;
    }
    else if(num==1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}