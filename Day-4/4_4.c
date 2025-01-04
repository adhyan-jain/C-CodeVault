// Program to perform linear search in an array.
#include <stdio.h>

int main(){
    // Initialize array
    int num, target;
    printf("Enter the elements to be added in the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Input target element
    printf("Enter the element to be searched: ");
    scanf("%d", &target);
    for (int i = 0; i < num; i++)
    {
        if (arr[i]==target){
            printf("Found element %d at index %d of array", target, i);
        }
    }
    return 0;
}