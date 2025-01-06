// Program to calculate the area and circumference of a circle using function parameters
#include <stdio.h>

// Function to calculate area and circumference of a circle
void circle(short radius, float *area, float *circumference) {
    const float PI = 3.14159;
    *area = PI * radius * radius;
    *circumference = 2 * PI * radius;
}

int main() {
    short radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%hd", &radius);

    circle(radius, &area, &circumference);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}