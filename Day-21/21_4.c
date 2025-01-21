/*
Zaara is working on her Maths assignment. The assignment is to convert a number to a Roman numeral.
Seven different symbols represent Roman numerals: I, V, X, L, C, D, and M. 
Roman numerals are usually written from largest to smallest from left to right.
However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five, we subtract it, making four.
The same principle applies to the number nine, which is registered as IX.

There are six instances where subtraction is used:
1.	I can be placed before V (5) and X (10) to make 4 and 9. 
2.	X can be placed before L (50) and C (100) to make 40 and 90. 
3.	C can be placed before D (500) and M (1000) to make 400 and 900.

Given an integer, convert it to a Roman numeral to help Zaara solve her assignment.

Input format :
The input consists of an integer N.

Output format :
The output prints the corresponding Roman numeral of the given integer.
If the input number is less than or equal to zero, display "Invalid".

Code constraints :
N < 106

Sample test cases :

Input 1 :
40
Output 1 :
XL

Input 2 :
1000
Output 2 :
M

Input 3 :
0
Output 3 :
Invalid

Input 4 :
-70
Output 4 :
Invalid

Input 5 :
27
Output 5 :
XXVII
*/

#include <stdio.h>

int main(){
    int num;
    char str[1000];
    scanf("%d", &num);
    if (num<=0){
        printf("Invalid");
        return 0;
    }
    int i=0;
    while (num>0){
        if(num>=1000){
            str[i]='M';
            num-=1000;
        }
        else if(num>=900){
            str[i]='C';
            str[i+1]='M';
            num-=900;
            i++;
        }
        else if(num>=500){
            str[i]='D';
            num-=500;
        }
        else if(num>=400){
            str[i]='C';
            str[i+1]='D';
            num-=400;
            i++;
        }
        else if(num>=100){
            str[i]='C';
            num-=100;
        }
        else if(num>=90){
            str[i]='X';
            str[i+1]='C';
            num-=90;
            i++;
        }
        else if(num>=50){
            str[i]='L';
            num-=50;
        }
        else if(num>=40){
            str[i]='X';
            str[i+1]='L';
            num-=40;
            i++;
        }
        else if(num>=10){
            str[i]='X';
            num-=10;
        }
        else if(num>=5){
            str[i]='V';
            num-=5;
        }
        else if(num>=4){
            str[i]='I';
            str[i+1]='V';
            num-=4;
            i++;
        }
        else if(num>=1){
            str[i]='I';
            num-=1;
        }
        i++;
    }
    str[i]='\0';
    int j=0;
    while(str[j]!='\0'){
        printf("%c", str[j]);
        j++;
    }
    return 0;
}
