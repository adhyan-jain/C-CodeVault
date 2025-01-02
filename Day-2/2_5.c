// Program to check if a number is positive, negative, or zero.
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num > 0){
        printf("The number is positive");
    }
    else if (num==0){
        printf("The number is zero");
    }
    else{
        printf("The number is negative");
    }
    return 0;
}