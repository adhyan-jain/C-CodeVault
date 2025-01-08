// Reverse an Array.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, n;
    
    printf("Enter array size: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    
    if (ptr == NULL) // Check if memory allocation was successful
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter Array elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    for (int i=0; i<n/2; i++){
        int temp=0;
        temp=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=temp;
    }

    printf("New Array: ");
    for (int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    free(ptr);
    ptr=NULL;
    return 0;
}