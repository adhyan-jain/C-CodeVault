/*
Teju considers the number 3 unlucky and wishes to remove the element located at the 3rd position in an array, considering the first position in the array as position 1. 

Write a program that eliminates the element at this 3rd position and then displays the modified array.

Input format :
The first line consists of an integer n, the size of the array.
The second line consists of n space-separated integers, representing the elements of the array.

Output format :
After removing the element at the 3rd position, the output displays space-separated integer array values.

Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases will fall under the following constraints:
3 ≤ n ≤ 15
1 ≤ elements ≤ 1000

Sample test cases :

Input 1 :
5
263 748 362 187 163
Output 1 :
263 748 187 163 

Input 2 :
10
765 899 532 142 376 897 1000 234 162 189
Output 2 :
765 899 142 376 897 1000 234 162 189 

Input 3 :
3
1 686 472
Output 3 :
1 686 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, *arr;
    scanf("%d", &num);
    arr=(int*)malloc(num*sizeof(int));
    if (arr==NULL){
        printf("Memory allocation failed");
        return 0;
    }
    
    for (int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d %d ", arr[0], arr[1]);
    
    for(int i=2; i<num-1; i++){
        arr[i]=arr[i+1];
        printf("%d ", arr[i]);
    }
    
    return 0;
}
