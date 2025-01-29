// Understanding auto storage class

#include <stdio.h>

void func() {
    auto int x = 10;  // Auto variable
    printf("%d ", x);
    x++;  
}

int main() {
    func();
    func();
    func();
    return 0;
}

