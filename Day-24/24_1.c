/*
Priya, a software developer, is working on a program to merge two sorted arrays into a single sorted array. She needs to create a function that takes two sorted arrays, merges them and sorts them into a single sorted array.

Input format :
The first line of input consists of an integer N, representing the number of elements in the first sorted array.
The second line consists of N space-separated integers, representing the elements of the first sorted array.
The third line consists of an integer M, representing the number of elements in the second sorted array.
The fourth line consists of M space-separated integers, representing the elements of the second sorted array.

Output format :
The output prints the merged sorted array.

Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ N, M ≤ 50
1 ≤ elements ≤ 200

Sample test cases :

Input 1 :
5
1 2 3 4 5
5
6 7 8 9 10
Output 1 :
1 2 3 4 5 6 7 8 9 10 

Input 2 :
3
10 15 20
5
11 12 17 22 25
Output 2 :
10 11 12 15 17 20 22 25 
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1, num2, *arr1, *arr2, nums, *arr;
    scanf("%d", &num1);
    arr1=(int*)malloc(num1*sizeof(int));
    for(int i=0; i<num1; i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &num2);
    arr2=(int*)malloc(num2*sizeof(int));
    nums=num1+num2;
    arr=(int*)malloc(nums*sizeof(int));
    for(int i=0; i<num2; i++){
        scanf("%d", &arr2[i]);
    }
    int k=0, j=0, i=0;
    
    while (j<num1 && k<num2){
        if(arr1[j]<=arr2[k]){
            arr[i++]=arr1[j++];
        }
        else{
            arr[i++]=arr2[k++];
        }
    }
    
    while (j<num1){
        arr[i++]=arr1[j++];
    }
    while (k<num2){
        arr[i++]=arr2[k++];
    }
    
    for(int i=0; i<nums; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
