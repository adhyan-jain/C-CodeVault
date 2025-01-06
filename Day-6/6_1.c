// Calculate the factorial of a number.
#include <stdio.h>

int factorial(int num);

int main(){
    int num, fac;
    printf("Enter number: ");
    scanf("%d", &num);
    fac=factorial(num);
    printf("Factorial: %d", fac);
    return 0;
}

int factorial(int num){
    while(num>1){
        return num * factorial(num-1);
    }
}