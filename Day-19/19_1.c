/*
Henry is working on a number manipulation task where he performs the following operations:

1.	Calculate the sum of each digit of a number N raised to the power P.
2.	Sum up the modified digits.
3.	Apply certain conditions based on the sum of the digits and further modify the sum:
•	If the sum of digits is not divisible by 5, and the sum is even, divide it by 3.
•	If the sum of digits is divisible by 5, multiply the sum by 2.

Help Henry to complete his task.

Example:

Input:
23 2

Output:
13

Explanation:
Input: N = 23, P = 2
Sum of Digits Raised to Power: 22 + 32 = 4 + 9 = 13
The sum of Digits of 13: 1+ 3 = 4.
Condition: Since 4 % 5 != 0, and 13 is odd, the sum remains 13.

Input format :
The input contains two integers, N and P, where: N is the number. P is the power each digit is raised to.

Output format :
The output should print the final modified sum after all calculations.

Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:
1 ≤ N ≤ 10000
1 ≤ P ≤ 100

Sample test cases :

Input 1 :
23 2
Output 1 :
13

Input 2 :
34 3
Output 2 :
182

Input 3 :
15 1
Output 3 :
2
*/

#include <stdio.h>

int func(int base, int power);

int main(){
    int num, power;
    int num2=0, rem;
    int sum=0;
    scanf("%d %d", &num, &power);
    while(num!=0){
        rem = func(num % 10, power);
        num2 += rem;
        num /= 10;
    }
    int num3=num2;
    while(num2!=0){
        rem = num2 % 10;
        sum += rem;
        num2 /= 10;
    }
    
    if (sum % 5 == 0){
        num3*=2;
    }
    else if(sum%5!=0){
        if (num3%2==0){
            num3/=3;
        }
    }
    printf("%d", num3);
    return 0;
}


int func (int base, int power){
    int result=base;
    
    for (int i= 2; i<=power; i++){
        result*=base;
    }
    return result;
}
