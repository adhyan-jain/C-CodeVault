/*
Sharon is fascinated by palindromes and wants to find the length of the longest palindromic substring in a given string. Write a program for Sharon that takes a string as input and outputs the length of the longest palindromic substring.

Example

Input:
bananas
Output: 
5
Explanation:
The longest palindromic substring is 'anana' with a length of 5.
Input format :
The input consists of a string.
Output format :
The output prints the integer, representing the length of the longest palindromic substring.

Refer to the sample output for formatting specifications.
Code constraints :
The string contains lowercase letters with at most 50 characters.
Sample test cases :
Input 1 :
bananas
Output 1 :
5
Input 2 :
acacacab
Output 2 :
7
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[50];
    char result[50];
    scanf("%s", str);
    int len=strlen(str);
    for (int i=0; i<len; i++){
        for(int j=i; j<len; j++){
            if(str[i]==str[j]){
                for(int k=i; k<=j; k++){
                    result[k-i]=str[k];
                }
            }
        }
    }
    
    if(strlen(result)==0){
        printf("%d", 1);
    }
    printf("%d", strlen(result));
    return 0;
}
