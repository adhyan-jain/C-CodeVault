/*
Problem Statement

Anil wants to calculate the interest earned on a fixed deposit. The rules are as follows:
•	For a regular account: The interest rate is 5% per annum.
•	For a senior citizen account: The interest rate is 7% per annum.
•	If the deposit duration exceeds 5 years, apply a bonus interest of Rs 10,000.
•	If the principal amount is above Rs 1,00,000, apply a 3% bonus on the interest.

Formula:
Total Interest = (Principal × Interest Rate × Duration) + Bonus Interest (if applicable) + Interest Bonus (if applicable)
Input format :
The first line contains a double d representing the Principal Amount in Rs.
The second line contains an integer n representing the Duration of the deposit in years.
The third line contains a char c representing the Account Type: ('R' for Regular Account and 'S' for Senior Citizen Account).
Output format :
The output should print the Total Interest earned in Rs, rounded to two decimal places.

Refer to the sample output for formatting specifications.
Code constraints :
The given test cases fall under the following constraints:
The Principal Amount should be a positive number.
The Duration should be a positive integer.
The Account Type should be either 'R' (Regular) or 'S' (Senior Citizen).
Sample test cases :
Input 1 :
150000.0
6
R
Output 1 :
56350.00
Input 2 :
120000.0
4
S
Output 2 :
34608.00
*/

#include <stdio.h>

int main(){
    float num;
    int n;
    char c;
    int interest, bonus1=0, bonus2=0;
    float total;
    scanf("%f %d %c", &num, &n, &c);
    if (c=='R'){
        interest=0.05*num*n;
    }
    else if(c=='S'){
        interest=0.07*num*n;
    }
    
    if (n>5){
        bonus1 = 10000;
    }
    if (num>100000){
        bonus2=0.03*interest;
    }
    
    total=interest+bonus1+bonus2;
    printf("%.2f", total);
    return 0;
}
