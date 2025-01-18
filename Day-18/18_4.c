/*

In a mathematics class, students are learning about matrices and their properties. The teacher has assigned a task to the students to calculate the sum of each row in a 3x3 matrix.

As a programmer, assist the students in calculating the sum by creating a program.

Input format :
The input consists of the elements of the 3x3 matrix.

Output format :
The output prints the sum of each row of the matrix in each line.

Refer to the sample output for the exact text and format.

Code constraints :
1 ≤ elements ≤ 1000

Sample test cases :

Input 1 :
1 2 3
4 5 6
7 8 9

Output 1 :
Sum of row 0: 6
Sum of row 1: 15
Sum of row 2: 24

Input 2 :
12 23 45
56 78 89
14 25 36

Output 2 :
Sum of row 0: 80
Sum of row 1: 223
Sum of row 2: 75
*/

#include <stdio.h>

int main(){
    int arr[3][3];
    int sum[3];
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
            sum[i]+=arr[i][j];
        }
    }
    printf("Sum of row 0: %d\n", sum[0]);
    printf("Sum of row 1: %d\n", sum[1]);
    printf("Sum of row 2: %d", sum[2]);
    
    return 0;
}
