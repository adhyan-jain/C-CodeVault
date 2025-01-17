/*
Write a program to display two strings in the following format.

Input:
Hi 
Welcome

Output:
Hi and Welcome

Input format :
The input consists of two strings.

Output format :
The output prints the final string.

Refer to the sample input and output for formatting specifications.

Sample test cases :

Input 1 :
Hi
Welcome

Output 1 :
Hi and Welcome
*/

#include <stdio.h>

int main(){
    char str1[100], str2[100];
    scanf("%s %s", &str1, &str2);
    printf("%s and %s", str1, str2);
    return 0;
}
