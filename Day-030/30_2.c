/*
Custom malloc & free Implementation
Problem Statement
Implement a simple memory allocator that mimics malloc() and free() using a static array as memory.

Constraints:

Use a fixed-size array as heap memory.
Implement custom_malloc() and custom_free() to allocate and deallocate memory.
Track allocated memory using a simple metadata system.
*/

#include <stdio.h>
#include <stdbool.h>

#define MEMORY_SIZE 1024  // Simulated heap size

char memory[MEMORY_SIZE];  // Simulated memory
bool allocated[MEMORY_SIZE] = {false};  // Tracking memory allocation

void* custom_malloc(size_t size) {
    for (size_t i = 0; i < MEMORY_SIZE; i++) {
        bool spaceAvailable = true;

        for (size_t j = 0; j < size; j++) {
            if (allocated[i + j]) {
                spaceAvailable = false;
                break;
            }
        }

        if (spaceAvailable) {
            for (size_t j = 0; j < size; j++) {
                allocated[i + j] = true;
            }
            return &memory[i]; // Return pointer to allocated memory
        }
    }
    return NULL; // No space available
}

void custom_free(void* ptr, size_t size) {
    size_t index = (char*)ptr - memory;  // Get index in the array

    for (size_t i = 0; i < size; i++) {
        allocated[index + i] = false;  // Mark memory as free
    }
}

int main() {
    char* ptr1 = (char*)custom_malloc(10);
    if (ptr1) {
        printf("Memory allocated at %p\n", ptr1);
    } else {
        printf("Allocation failed!\n");
    }

    custom_free(ptr1, 10);
    printf("Memory freed.\n");

    return 0;
}
