// Create a structure Rectangle and write a program to calculate its area and perimeter

#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
    struct Rectangle r;
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &r.length, &r.width);

    float area = r.length * r.width;
    float perimeter = 2 * (r.length + r.width);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
