/*
Given a five digit integer, print the sum of its digits.
*/

#include <stdio.h>

int main() {
	
    int n, rem,sum=0;
    scanf("%d", &n);
    for(int i=0; n>0; i++){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("%d", sum);
    return 0;
}
