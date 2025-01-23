/*
Sandeep is organizing a neighbourhood bicycle race and he wants to rearrange the starting positions of the participants.
Write a program that takes an array of participant numbers and an integer M and rotates the array to the right by M positions to determine the new starting order for the race.

Input format :
The first line of input consists of an integer N, representing the number of participants.
The second line consists of N space-separated integers, representing the participant numbers.
The third line consists of an integer M, representing the number of positions to be rotated.

Output format :
The output prints the rotated array with M positions to the right, separated by a space.

Code constraints :
1 ≤ N ≤ 10

1 ≤ elements ≤ 100

1 ≤ M < N

Sample test cases :
Input 1 :
5
47 56 95 24 38
3
Output 1 :
95 24 38 47 56 

Input 2 :
8
1 2 3 4 5 6 7 8
6
Output 2 :
3 4 5 6 7 8 1 2 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, *arr;
    scanf("%d", &n);
    arr=(int*)malloc(n*sizeof(int));
    if (arr==NULL){
        printf("Memory allocation failed!");
        return 0;
    }
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    m=m%n;
    for (int i=0; i<m; i++){
        int last=arr[n-1];
        for (int j=n-1; j>0; j--){
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}