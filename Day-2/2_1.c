// Program to find the largest and smallest of 3 numbers
#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter the first number : \n");
    scanf("%d",&num1);
    printf("Enter the second number : \n");
    scanf("%d",&num2);
    printf("Enter the third number : \n");
    scanf("%d",&num3);
    if (num1 > num2 && num1 > num3){
        printf("First number is the greatest\n");
        if(num2>num3){
            printf("Third number is smallest\n");
        }
        else{
            printf("Second number is smallest\n");
        }
    }
    else{
        if (num2>num3 && num2>num1){
            printf("Second number is largest\n");
            if(num1>num3){
                printf("Third number is smallest\n");
            }
            else{
                printf("First number is smallest\n");
            }
        }
        else if (num3>num2 && num3>num1){
            printf("Third number is largest\n");
            if(num1>num2){
                printf("Second number is smallest\n");
            }
            else{
                printf("First number is smallest\n");
            }
        }
    }
    return 0;
}
