/*
Bob is working on a text analysis tool and needs your help in developing a program that classifies characters in a given string. The program should count the number of vowels, consonants, digits, and special characters in the input string.

Input format :
The input consists of a String, representing the text in which the counts of vowels, consonants, digits, and special characters will be determined.

Output format :
The first line of output prints "Vowels: " followed by an integer representing the count of vowels in the input string.
The second line prints "Consonants: " followed by an integer representing the count of consonants in the input string.
The third line prints "Digits: " followed by an integer representing the count of digits in the input string.
The fourth line prints "Special Characters: " followed by an integer representing the count of special characters in the input string.

Refer to the sample output for formatting specifications.

Code constraints :
The length of the input string will not exceed 150 characters.

Sample test cases :

Input 1 :
123Hello@@
Output 1 :
Vowels: 2
Consonants: 3
Digits: 3
Special Characters: 2

Input 2 :
aliceinwonderland48
Output 2 :
Vowels: 7
Consonants: 10
Digits: 2
Special Characters: 0

Input 3 :
AeuNn123@
Output 3 :
Vowels: 3
Consonants: 2
Digits: 3
Special Characters: 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){
    int vowel=0, consonants=0, digits=0, special=0;
    char str[151];
    scanf("%s", &str);
    for (int i=0; str[i] != '\0'; i++){
        if (tolower(str[i])=='a' || tolower(str[i])=='e' || tolower(str[i])=='i' ||tolower(str[i])=='o' ||tolower(str[i])=='u'){
            vowel++;
        }
        else if(isalpha(str[i])){
            consonants++;
        }
        else if(isdigit(str[i])){
            digits++;
        }
        else{
            special++;
        }
    }
    
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d", special);
    return 0;
}
