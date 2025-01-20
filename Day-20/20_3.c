/*
Write a program to store n elements in an array and get a number to search. Your program should display whether the search number is present in the array or not. 

Input format :
The first line of input consists of the number of elements n in the array.
The second line of input consists of the n array elements, separated by space.
The third line of input consists of the search number.

Output format :
The output should display whether the given search number is present in the array or not.

Refer to the sample output for formatting specifications.

Code constraints :
The maximum size of the array is 10.

Sample test cases :

Input 1 :
5
1 2 3 4 5
3
Output 1 :
The number 3 is present in the array

Input 2 :
5
1 2 3 4 5
6
Output 2 :
The number 6 is not present in the array
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int len, *arr, num;
    scanf("%d", &len);
    arr=(int*)malloc(len*sizeof(int));
    for (int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &num);
    for (int i=0; i<len; i++){
        if (arr[i]==num){
            printf("The number %d is present in the array", num);
            return 0;
        }
    }
    printf("The number %d is not present in the array");
    return 0;
}
