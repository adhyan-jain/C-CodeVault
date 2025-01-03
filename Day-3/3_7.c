// Check if given number is prime
#include <stdio.h>

int main()
{
    int num,is_prime=1;
    printf("Enter number : ");
    scanf("%d", &num);
    if (num <= 1){
        is_prime=0;
    }
    for (int i=2; i<num; i++){
        if (num % i == 0){
            is_prime=0;
            break;
        }
    }
    if (is_prime) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }
    return 0;
}
