/*
Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
If n=4;

4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4 

*/

#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	 for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            // Compute the distance from the edges
            int x = i < n ? n - 1 - i : i - n + 1;
            int y = j < n ? n - 1 - j : j - n + 1;

            // Use the maximum distance to determine the value
            int nums = n - (x > y ? x : y);
            printf("%d ", -(nums-n-1));
        }
        printf("\n");
    }
    return 0;
}