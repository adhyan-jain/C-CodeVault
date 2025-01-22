/*
In this challenge, create an array of size  dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements. Print the sum and free the memory where the array is stored.
While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array. Efficiency will be required later.

Input Format
The first line contains an integer, .
The next line contains  space-separated integers.

Output Format
Print the sum of the integers in the array.

Sample Input 0
6
16 13 7 2 1 12 
Sample Output 0
51

Sample Input 1
7
1 13 15 20 12 13 2 
Sample Output 1
76
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int num, *arr, sum=0;
     scanf("%d", &num);
     arr=(int*)malloc(num*sizeof(int));
     for (int i=0; i<num; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
     }
     printf("%d", sum);
    return 0;
}
