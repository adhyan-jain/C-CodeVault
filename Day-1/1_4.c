#include <stdio.h>
// Taking user input for two numbers and find their sum, difference, product and quotient
int main(){
    // Defining Variables
    int a,b;
    int sum,difference,product;
    float quotient;
    // Taking user input of a and b
    printf("Input first number :");
    scanf("%d",&a);
    printf("INput second number :");
    scanf("%d",&b);
    // Performing arithmetic operations
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = (float) a/b;
    // Printing the result of arithmetic operations
    printf("Sum of two nubers is %d\n",sum);
    printf("Difference of two nubers is %d\n",difference);
    printf("Product of two nubers is %d\n",product);
    printf("Quotient of two nubers is %f\n",quotient);
    return 0;
}