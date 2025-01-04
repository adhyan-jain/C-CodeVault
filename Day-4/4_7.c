// Program to remove duplicates from an array and sort the remaining elements
#include <stdio.h>

int main(){
    // Creating array
    int num;
    printf("Enter the number of elements to be added in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Removing duplicate elements
    for (int i = 0; i < num; i++){
        for (int j = i + 1; j < num; j++){
            if (arr[i] == arr[j]){
                for (int k = j; k < num - 1; k++){
                    arr[k] = arr[k + 1];
                }
                num--;
                j--;
            }
        }
    }
    
    // Output the new array
    printf("Array after removing duplicates: ");
    for (int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}