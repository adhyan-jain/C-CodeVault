// Implement a program to store an array of Products with prices and calculate the total price

#include <stdio.h>

struct Product {
    char name[50];
    float price;
};

int main() {
    struct Product products[3] = {{"Product1", 10.5}, {"Product2", 20.0}, {"Product3", 15.75}};
    float total = 0.0;

    for (int i = 0; i < 3; i++) {
        total += products[i].price;
    }

    printf("Total price of products: %.2f\n", total);

    return 0;
}
