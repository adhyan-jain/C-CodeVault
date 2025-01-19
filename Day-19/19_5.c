/*
Abi is currently working on a program to calculate the length of a given string. She needs a tool that can efficiently determine the number of characters in a string. 

Help her to complete task.
Input format :
The input consists of the string without space.
Output format :
The output prints the length of the string.

Refer to the sample output for the formatting specifications.

Code constraints :
The input string consists of a maximum of 50 characters.

Sample test cases :

Input 1 :
wonderland
Output 1 :
10

Input 2 :
cindrella
Output 2 :
9
*/


#include <stdio.h>

int main(){
    char str[50];
    int count;
    scanf("%s", &str);
    while (str[count]!='\0'){
        count++;
    }
    printf("%d", count);
    return 0;
}
