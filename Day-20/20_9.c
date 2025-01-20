/*
Write a program that lets the user enter the total rainfall for each of the 12 months in an array. The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts of rainfall.

Input format :
The input consists of a list of 12 integers that represent the value of rainfall each month, separated by space.

Output format :
The first line of output prints the total rainfall.
The second line of output prints the integer that represents the average rainfall.
The third line of output prints the month with the lowest rainfall.
The fourth line of output prints the month with the highest rainfall.
Print "Invalid input" if input values<0.

Refer to the sample output for formatting specifications.

Sample test cases :

Input 1 :
12 23 45 56 78 89 98 87 65 54 32 21
Output 1 :
Total rainfall : 660
Average rainfall : 55
Lowest rainfall month : 1
Highest rainfall month : 7

Input 2 :
456 123 789 987 654 321 147 258 369 963 852 741
Output 2 :
Total rainfall : 6660
Average rainfall : 555
Lowest rainfall month : 2
Highest rainfall month : 4

Input 3 :
9 8 5 4 2 3 1 16 13 18 17 27
Output 3 :
Total rainfall : 123
Average rainfall : 10
Lowest rainfall month : 7
Highest rainfall month : 12

Input 4 :
-10
Output 4 :
Invalid input
*/

#include <stdio.h>

int main(){
    int arr[13], sum=0 ,avg, max=0, min=0;
    for (int i=0; i<12; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
        if (arr[max]<arr[i]){
            max = i;
        }
        if (arr[min]>arr[i]){
            min = i;
        }
    }
    avg=sum/12;
    if (sum<0){
        printf("Invalid input");
        return 0;
    }
    printf("Total rainfall : %d\n", sum);
    printf("Average rainfall : %d\n", avg);
    printf("Lowest rainfall month : %d\n", ++min);
    printf("Highest rainfall month : %d", ++max);
    return 0;
}
