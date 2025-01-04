// Program to find the second largest number in an array
#include <stdio.h>

int main(){
    int num, max, second_max;
    // Initialize array
    printf("Enter the elements to be added in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Find the maximum number and second maximum number in the array
    max=arr[0];
    second_max=arr[0];
    for (int i=0; i<num; i++){
        if (arr[i]>=max){
            second_max=max;
            max=arr[i];
        }
    }
    printf("The second largest number in the array is: %d", second_max);
    return 0;
}