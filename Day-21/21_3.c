/*
Jack is curious about duck numbers, which are defined as numbers containing at least one '0' but do not start with '0'. Write a recursive function that checks if a given integer is a duck number.

Function Specifications: bool isDuckNumber(int)

Input format :
The input consists of an integer, n.

Output format :
Print "n is a duck number." if it is a duck number.
Print "n is not a duck number." if it is not a duck number.

Code constraints :
In this scenario, the test cases fall under the following constraints:
1 ≤ n ≤ 105

Sample test cases :

Input 1 :
102
Output 1 :
102 is a duck number.

Input 2 :
033
Output 2 :
33 is not a duck number.

Input 3 :
10030
Output 3 :
10030 is a duck number.
*/

#include <stdio.h>

int isDuckNumber(int num);

int main(){
    int num;
    int check;
    scanf("%d", &num);
    check=isDuckNumber(num);
    if (check){
        printf("%d is a duck number.",num);
    }
    else{
        printf("%d is not a duck number.", num);
    }
    return 0;
}

int isDuckNumber(int num){
    int check=0;
    int rem, first;;
    while (num!=0){
        rem=num%10;
        if(rem==0 && num/10!=0){
            check=1;
        }
        num/=10;
        first=rem;
    }
    if (first==0){
        check=0;
    }
    return check;
}
