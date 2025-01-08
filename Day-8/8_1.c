// Program to dynamically allocate memory for an array of integers
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
    
    printf("Enter elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", ptr+i);
    }
    
    printf("Array: \n");
    for (int i=0; i<n; i++){
        printf("%d\n",ptr[i]);
    }
    
    free(ptr);
    ptr=NULL;
    return 0;
}