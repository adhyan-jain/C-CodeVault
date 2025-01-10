// Program to check if a number is an Armstrong number

#include <stdio.h>
#include <math.h>

int main(){
    int num, sum=0;
    int count=0, rem=0;
    printf("Enter number: ");
    scanf("%d", &num);

    int temp=num;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=num;
    while (temp!=0){
        rem = temp % 10;  // Fix: semicolon added
        sum += (float)pow(rem, count);  // You can keep pow here for simplicity
        temp /= 10;
    }
    printf("Original Number: %d\n", num);
    printf("Sum of its digits: %d\n", sum);
    if (num==sum){
        printf("The number is Armstrong");
    }
    else{
        printf("The number is not Armstrong");
    }
    return 0;
}